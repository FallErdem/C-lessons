//fonk ile faktöriyel hesaplama
#include <stdio.h>
 
int faktoriyel(int sayi)
{
    int sonuc =1;
    
    for(int i=1; i<=sayi; i++)
    {
        sonuc *= i;
    }
    printf("%d!=%d",sayi, sonuc);
}
 
int main()
{
    int sayi; 
    printf("Faktöriyeli alınacak sayıyı giriniz.");
    scanf("%d",&sayi);
    faktoriyel(sayi);
}