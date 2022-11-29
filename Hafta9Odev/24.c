//Sayının polindrom olup olmadığına bakan kod
#include <stdio.h>
int polindrom(int a)
{
 int birler,onlar,binler,onbinler;
 birler=a%10;
 onlar=(a%100)/10;
 binler=(a%10000)/1000;
 onbinler= a/10000;
 if(birler==onbinler && onlar==binler)
 {
  printf("Sayı polindromdur.");
 }
 else
 {
  printf("Sayı polindrom değildir.");
 }
}

int main()
{
    int x;
    printf("5 basamaklı bir tamsayı giriniz.");
    scanf("%d",&x);
    polindrom(x);
    return 0;
}

//12321