#include <stdio.h>

typedef struct {
    char code[10];
    char name[20];
    int price;
} Gift;

int main(void) {
    int qty; // データ数
    char filename[256];

    printf("データ数を入力してください: ");
    scanf("%d", &qty);

    printf("ファイル名を指定してください: ");
    scanf("%s", filename);

    Gift *gifts[qty];
    FILE *in, *out;

    if ((in = fopen(filename, "r")) == NULL) {
        printf("ファイルの読み込みに失敗しました");
        return 1;
    }

    out = fopen("kadai.dat", "w");

    for (int i = 0; i < qty; i++)
        fscanf(in, "%s %s %d\n", &gifts[i]->code, &gifts[i]->name, &gifts[i]->price);

    fclose(out);
    fclose(in);

    return 0;
}

