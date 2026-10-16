#include <stdio.h>

int main() {
    FILE *fayl = fopen("xaridlar.txt", "r");
    if (fayl == NULL) {
        return 1;
    }
    
    int summa;
    int katta_soni = 0;
    
    for (int i = 0; i < 5; i++) {
        fscanf(fayl, "%d", &summa);
        if (summa > 50000) {
            katta_soni++;
        }
    }
    
    fclose(fayl);
    printf("Katta xaridlar soni: %d\n", katta_soni);
    
    return 0;
}