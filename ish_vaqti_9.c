#include <stdio.h>

struct Xodim {
    char ism[50];
    int soat;
};

int main() {
    FILE *fayl = fopen("xodimlar.txt", "r");
    if (fayl == NULL) return 1;
    
    int n;
    fscanf(fayl, "%d", &n);
    
    struct Xodim xodimlar[n];
    for (int i = 0; i < n; i++) {
        fscanf(fayl, "%s %d", xodimlar[i].ism, &xodimlar[i].soat);
    }
    
    fclose(fayl);
    
    for (int i = 0; i < n; i++) {
        int ish_haqi = xodimlar[i].soat * 15000;
        printf("%s: %d som\n", xodimlar[i].ism, ish_haqi);
    }
    
    return 0;
}