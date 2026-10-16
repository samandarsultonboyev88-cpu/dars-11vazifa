#include <stdio.h>

void almashtir(int *x, int *y)
{
    int vaqtinchalik = *x;
    *x = *y;
    *y = vaqtinchalik;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    almashtir(&a, &b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}