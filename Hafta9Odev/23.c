//Girilen üç sayının karşılaştırılması
#include <stdio.h>
int kimbuyuk(int a,int b,int c)
{
if(a>b && a>c)
 {
    if(b>c)
       {
        printf("a>b>c");
       }
    else
       {
        printf("a>c>b");
       }
 }
else if(b>a && b>c)
 {
    if(a>c)
      {
       printf("b>a>c");
      }
    else
      { 
       printf("b>c>a");
      }
 }
else
 {
    if(a>b)
      {
       printf("c>a>b");
      }
    else
      {
       printf("c>b>a");
      }
 }
}

int main()
{
    int x1,x2,x3;
    printf("Karşılaştırılmasını istediğiniz üç tam sayıyı giriniz.");
    scanf("%d%d%d",&x1,&x2,&x3);
    printf("a=%d\n",x1);
    printf("b=%d\n",x2);
    printf("c=%d\n",x3);
    kimbuyuk(x1,x2,x3);
    return 0;
}