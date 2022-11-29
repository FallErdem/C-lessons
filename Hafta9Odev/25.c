//Bir sayının üssünü alan programın kodu
#include <stdio.h>
int bunemis(int x1,int x2)
{
 int a=1;
  do{
   a=a*x1;
   x2=x2-1;
  }while(x2>0);
  printf("Sonuç:%d", a);
}

int main()
{
    int i,e;
    printf("Tabanı giriniz:");
    scanf("%d", &i);
    printf("Üssü giriniz:");
    scanf("%d", &e);
    bunemis(i,e);
    return 0;
}