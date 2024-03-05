#include <stdio.h>

int main() {
    int jumlahtransaksi;
    int nominaltransaksi1;
    float jumlahpengeluaran = 0.0f;
    
    printf("Masukkan jumlah transaksi: ");
    scanf("%d", &jumlahtransaksi);
    
    if (jumlahtransaksi <= 0) {
        printf("Tidak ada transaksi hari ini\n");
        return 0;
    }
    
    for (int i = 1; i <= jumlahtransaksi; i++) {
        int nominaltransaksi;
        printf("Masukkan nominal transaksi ke-%d: ", i);
        scanf("%d", &nominaltransaksi);
        jumlahpengeluaran += (float)nominaltransaksi;
    }
    
    printf("Total pengeluaran hari ini: %.2f\n", jumlahpengeluaran);
    
    return 0;
    
}
