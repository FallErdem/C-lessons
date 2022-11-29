//girilen 2 sayıyı algılayıp fonksiyon yardımıyla toplama
#include <stdio.h>
int topla(int sayi1, int sayi2)
{
 int toplam=sayi1+sayi2;
 return toplam;
}
int main()
{
 int x1,x2,toplam;
 printf("Toplanmasını istediğiniz sayıları giriniz");
 scanf("%d", &x1);
 scanf("%d", &x2);
 toplam=topla(x1,x2);
 printf("Sayıların toplamı %d'dir.",toplam);
 return 0;
}