#include <stdio.h>

int kare(int x1)
{
 int toplam;
 toplam=x1*x1;    
 return toplam;
}

int main()
{
    int sonuc, deger;
    printf("Karesini almak istediğiniz sayıyı giriniz.");
    scanf("%d", &deger);
    sonuc=kare(deger);
    printf("Sonuç:%d", sonuc);
    return 0;
}