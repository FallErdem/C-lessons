//x değeri klavyeden girildiğinde 1 + 2 + .... + (x - 1) + x seri toplama değerini hesaplayan fonksiyon yazınız.
#include <stdio.h>
int toplama(int x){
    int toplam=0;
    for(int sayi=1;sayi<=x;sayi++)
    {
        toplam=sayi+toplam;
       
    }
     return toplam;
}
int main()
{
  int x;
  int toplam;
  printf("X değerini giriniz.");
  scanf("%d" , &x);
  toplam=toplama(x);
  printf("Toplam değeri:%d", toplam);
return 0;
}