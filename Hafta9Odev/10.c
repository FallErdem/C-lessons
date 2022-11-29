#include <stdio.h>
int alan(int x1,int x2)
{
    int alan;
    alan=x1*x2;
    return alan;
}

int kenar(int x1, int x2)
{
    int kenar;
    kenar=2*(x1+x2);
    return kenar;
}

int main()
{
    int k1,k2,bolge,uzunluk;
    printf("Alanının ve kenar uzunlukları toplamının bulunmasını istediğiniz dikdörtgenin kenarlarını giriniz.");
    scanf("%d%d", &k1,&k2);
    bolge=alan(k1,k2);
    uzunluk=kenar(k1,k2);
    printf("Alan=%d\nKenar Uzunlukları Toplamı=%d",bolge,uzunluk);
    return 0;
}