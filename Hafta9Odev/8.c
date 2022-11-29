#include <stdio.h>
int alan(int yari)
{
 int pi,alan;
 pi=3;
 alan=pi*yari*yari;

}

int cevre(int yari)
{
 int pi,etraf;
 pi=3;
 etraf=2*pi*yari;
}

int main()
{
    int yari,bolge,etraf;
    printf("Alanını ve çevresini hesaplamak istediğiniz dairenin yarıçapını giriniz.");
    scanf("%d", &yari);
    bolge=alan(yari);
    etraf=cevre(yari);
    printf("Dairenin Alanı:%d\n",bolge);
    printf("Dairenin Çevresi:%d",etraf);
    return 0;
}