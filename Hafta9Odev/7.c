#include <stdio.h>
int donem(int kisininyasi)
{
     if(kisininyasi>=0 && kisininyasi<15)
    {
         printf("Çocuksunuz.");
    }
     else if(kisininyasi >= 15 && kisininyasi < 30)
    {
          printf("Gençsiniz.");
    }
     else if(kisininyasi >= 30 && kisininyasi < 55)
    {
          printf("Yetişkinsiniz.");
    }
     else if(kisininyasi >= 55 && kisininyasi < 120)
    {
          printf("Yaşlısınız.");
    }

     else
    {
          printf("Yanlış giriş yaptınız.");
    }
}

int main()
{
     int yas;

     printf("Kaç yaşındasınız?");
     scanf("%d",&yas);
     donem(yas);
     return 0;
}