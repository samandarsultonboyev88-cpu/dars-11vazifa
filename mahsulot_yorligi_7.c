#include <stdio.h>

struct Mahsulot {
    char nomi[50];
    float narxi;
    int miqdori;
};

int main() {
    struct Mahsulot m;
    
    scanf("%s", m.nomi);
    scanf("%f", &m.narxi);
    scanf("%d", &m.miqdori);
    
    float ombor_qiymati = m.narxi * m.miqdori;
    
    printf("Mahsulot: %s\n", m.nomi);
    printf("Narxi: %.0f\n", m.narxi);
    printf("Miqdori: %d\n", m.miqdori);
    printf("Ombor qiymati: %.0f\n", ombor_qiymati);
    
    return 0;
}