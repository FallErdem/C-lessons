//üçgenin alanını bulan kod
#include <stdio.h>
int alan(int x1,int x2)
{
    int bolge;
    bolge=(x1*x2)/2;
    printf("Üçgenin alanı:%d", bolge);
    return bolge;
}

int main()
{
    int sayi1,sayi2;
    printf("Üçgenin taban uzunluğunu ve yüksekliğini giriniz.");
    scanf("%d%d", &sayi1,&sayi2);
    alan(sayi1,sayi2);
    return 0;
}