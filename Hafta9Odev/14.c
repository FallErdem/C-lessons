//belirlenen sayıdan geriye doğru sayan ve sayıları ekrana alt alta yazdıran program
#include<stdio.h>
int sayi(int x1)
{
    int a;
    for(a=x1;a>=0;a--)
    {
        printf("%d\n", a);
    }
}

int main()
{
 int b;
 printf("Geri sayım yapılmasını istediğiniz sayıyı giriniz.");
 scanf("%d",&b);
 sayi(b);
 return 0;
}