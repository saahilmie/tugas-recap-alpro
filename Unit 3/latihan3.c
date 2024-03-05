#include <stdio.h>

int main() {
    int jumlahelemen;
    int jumlahnilai = 0;
    int i;

    printf("Masukkan jumlah elemen pada array: ");
    scanf("%d", &jumlahelemen);

    int array[jumlahelemen];

    printf("Masukkan %d nilai elemen: ", jumlahelemen);
    for (int i = 0; i < jumlahelemen; i++) {
        scanf("%d", &array[i]);
        jumlahnilai += array[i];
    }

    printf("Hasil penjumlahan seluruh elemen: %d\n", jumlahnilai);

    return 0;
}
