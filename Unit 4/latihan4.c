#include <stdio.h>


int keliling(int sisi) {
        return 4 * sisi;
    }
    
    int luas(int sisi) {
        return sisi * sisi;
    }
    
    int volume(int sisi) {
        return sisi * sisi * sisi;
    }   
    
    
int main(void)
{
    int sisi;
    
    printf("Masukkan panjang sisi kubus: ");
    scanf("%d", &sisi);
    printf("\n");
    
    
    printf("Keliling persegi = %d\n",
            keliling(sisi));
    printf("Luas persegi = %d\n",
            luas(sisi));
    printf("Volume kubus = %d",
            volume(sisi));

    return 0;
}


/*Semoga bener begini Aamiin*/
