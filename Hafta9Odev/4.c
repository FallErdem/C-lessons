#include <stdio.h>
int carpim(int x1,int x2)
{
    int toplam;
    toplam=x1*x2;
    return toplam;
}

int main()
{
    int sayi1,sayi2,sonuc;
    printf("Çarpmak istediğiniz sayıları giriniz.");
    scanf("%d", &sayi1);
    scanf("%d", &sayi2);
    sonuc=carpim(sayi1,sayi2);
    printf("Sonuc:%d", sonuc);
    return 0;

}