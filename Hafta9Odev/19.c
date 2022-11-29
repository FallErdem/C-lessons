//girilen 2sayının aritmetik ortalamasını hesaplayan kod
#include <stdio.h>
int ort(int x1,int x2)
{
    double ortalama;
    ortalama=(x1+x2)/2;
    printf("İki sayının ortalaması:%lf",ortalama);
    return ortalama;
}

int main()
{
    int a,b;
    printf("Ortalamasının alınmasını istediğiniz sayıları giriniz.");
    scanf("%d%d", &a,&b);
    ort(a,b);
    return 0;
}