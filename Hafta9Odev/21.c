//Kulanıcı tarafından klavyeden girilen iki tamsayının birbirlerine göre durumlarını ekrana yazan program
#include <stdio.h>
int hangisi(int x1,int x2)
{
 if(x1>x2)
 {
 printf(" x1 büyüktür x2 ");
 }
else if(x1==x2)
 {
 printf(" x1 eşittir x2 ");
 }
else
 {
 printf(" x2 büyüktür x1 ");
 }

}

int main()
{
    int a,b;
    printf("Karşılaştırmak istediğiniz sayıları giriniz.");
    scanf("%d%d", &a,&b);
    hangisi(a,b);
    return 0;
}