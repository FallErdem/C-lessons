//Klavyeden karne ortalaması girilen bir öğrencinin belge durumunu gösteren program kodu
#include <stdio.h>
int ort(int x1)
{
    if (x1>=0 && x1<=69)
    {
        printf("Öğrenci belge alamaz.");
    }

    else if (x1>=70 && x1<=84)
    {
        printf("Öğrenci teşekkür belgesi kazanmıştır.");
    }

    else if (x1>=85 && x1<=100)
    {
        printf("Öğrenci takdir belgesi kazanmıştır.");
    }

    else
    {
        printf("Karne değeri 0 ile 100 arasında olmalıdır.");
    }
}

int main()
{
    float not;
    printf("Not ortalamasını giriniz.");
    scanf("%f", &not);
    ort(not);
    return 0;
}