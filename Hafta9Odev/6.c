#include <stdio.h>
int bolum(int sayi1,int sayi2)
{
    float sonuc;
    sonuc=sayi1/sayi2;
    return sonuc;
}

int main()
{
    float toplam;
    int x1,x2;
    printf("Bölme işlemi yapmak istediğiniz sayıları pay değeri ilk önce olmak şartı ile girin.");
    scanf("%d", &x1);
    scanf("%d", &x2);
    toplam=bolum(x1,x2);
    printf("%f", toplam);
    return 0;
}