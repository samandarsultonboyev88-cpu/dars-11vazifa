#include <stdio.h>

float chegirma(float narx)
{
    return narx - (narx * 0.10);
}

int main()
{
    float mahsulotlar[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &mahsulotlar[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        float yangi_narx = chegirma(mahsulotlar[i]);

        printf("%.0f ", yangi_narx);
    }
    printf("\n");

    return 0;
}