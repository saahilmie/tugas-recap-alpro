#include <stdio.h>

int main()
{
    int s1, t1;
    int v1, t2;
    int s2, v2;
    
    scanf("%d", &s1);
    scanf("%d", &t1);
    scanf("%d", &v1);
    scanf("%d", &t2);
    scanf("%d", &s2);
    scanf("%d", &v2);
    
    float V = (float) s1 / t1;
    float S = (float) v1 * t2;
    float T = (float) s2 / v2;
    
    printf("%f\n", V);
    printf("%f\n", S);
    printf("%f\n", T);

    return 0;
}



/*contohnya seperti ini*/


#include <stdio.h>

int main() {
    float v, s, t;
    int s1, t1;
    int v1, t2;
    int s2, v2;
    int bilangan1, bilangan2;

    printf("Masukkan jarak (m) dan waktu (s) secara berurutan: ");
    scanf("%d %d", &s1, &t1);
    s = (float)bilangan1;
    t = (float)bilangan2;

    // Hitung kecepatan
    v = s1 / t1;
    printf("Kecepatan: %.2f m/s\n", v);


    printf("Masukkan kecepatan (m/s) dan waktu (s) secara berurutan: ");
    scanf("%d %d", & v1, & t2);
    v = (float)bilangan1;
    t = (float)bilangan2;
    
    // Hitung jarak
    s = v1 * t2;
    printf("Jarak: %.2f meter\n", s);

    
    printf("Masukkan jarak (m) dan kecepatan (m/s) secara berurutan: ");
    scanf("%d %d", &s2, &v2);
    s = (float)bilangan1;
    v = (float)bilangan2;

    // Hitung waktu
    t = s2 / v2;
    printf("Waktu: %.2f detik\n", t);

    return 0;
}
