#include<iostream>
#include<vector>
#include<cctype>
#include<algorithm>

typedef std::vector<int> vi;
typedef std::vector<vi> vvi;

int multiply(vi line, vi row);
vi getRow(vvi matrix, int row);
bool validate(std::string str);

int main() {
  std::cout << "行列計算を開始します。" << std::endl;
  std::cout << "何×何行列の計算を行うか入力してください。" << std::endl;
  
  int size;
  std::string size_s;
  std::cin >> size_s;
  
  if (!validate(size_s)) return 1;
  
  size = stoi(size_s);

  vvi matA = vvi(size, vi(size));
  vvi matB = vvi(size, vi(size));
  
  std::cout << "[1つ目の行列]" << std::endl;

  for (int line = 0; line < size; line++) {
    for (int row = 0; row < size; row++) {
      std::cout << "(" + std::to_string(line + 1) + ", " + std::to_string(row + 1) + ") を入力してください" << std::endl;
      
      std::cin >> matA[line][row];
    }
  }

  std::cout << "[2つ目の行列]" << std::endl;

  for (int line = 0; line < size; line++) {
    for (int row = 0; row < size; row++) {
      std::cout << "(" + std::to_string(line + 1) + ", " + std::to_string(row + 1) + ") を入力してください" << std::endl;
      
      std::cin >> matB[line][row];
    }
  }

  std::cout << "[答え]" << std::endl;

  for (int line = 0; line < size; line++) {
    for (int row = 0; row < size; row++) std::cout << std::to_string( multiply(matA[line], getRow(matB, row)) ) + " ";
    std::cout << std::endl;
  }

  return 0;
}

// n 行 1 列 * 1 行 n 列
int multiply(vi line, vi row) {
  int result = 0;
  for (int i = 0; i < line.size(); i++) result += line[i] * row[i];
  return result;
}

// 正方行列の row 列を vi で取得する
vi getRow(vvi matrix, int row) {
  vi result(matrix.size());
  for (int line = 0; line < matrix.size(); line++) result[line] = matrix[line][row];
  return result;
}

bool validate(std::string str) {
  return std::all_of(str.cbegin(), str.cend(), isdigit);
}
