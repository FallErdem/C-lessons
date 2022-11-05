#include <stdio.h>
int main()
{
     int sayi=1242;
     printf("Sayi: %d\n", sayi);
     int birler, onlar, yuzler, binler;
     birler=(sayi%10);
     printf("Birler: %d\n", birler);
     onlar=(sayi%100-birler)/10;
     printf("Onlar: %d\n",onlar);
     yuzler=(sayi%1000-sayi%100)/100;
     printf("Yüzler: %d\n", yuzler);
     binler=(sayi%10000)/1000;
     printf("Binler:%d\n", binler);

     int ab, cd, ba,dc,carpim_badc, carpim_abcd;
     ab=binler*10+yuzler;
     cd=onlar*10+birler;
     ba=yuzler*10+binler;
     dc=birler*10+onlar;
     carpim_abcd=ab*cd;
     carpim_badc=ba*dc;

     if (carpim_badc==carpim_abcd)
     {
        printf("Tersyüz Bir Sayıdır.");
     }
      
        else
      {
        printf("Tersyüz Bir Sayı Değildir.");
      }
     

     //abcd sayısı için ab*cd=ba*dc

     //girilcek puanlar ales yds ve mezuniyet not ortalaması (hepsi 100 üzerinden lisans üstü alımlar için mininmum şart 60 puan olması lazım yandakilerin ortalaması alesin%50si ydsnin%25i mezuniyet ortalamasının %25i minimum yds puanı 70 olmalı 70ten küçükse başvuru yapamaz )






     return 0;
}