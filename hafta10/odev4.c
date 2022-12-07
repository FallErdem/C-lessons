#include <stdio.h>
float ortalamabul(int dolas[])
{
    int toplam=0;

    for(int i=0;i<5;i++)
    {
        toplam+=dolas[i];
    }
    float ort=toplam/5.0;
    return ort;
}


int enkucuk(int dizi[])
{
for(int i=0; i<5; i++)
 {
    int kucuk;
        if(i == 0)
        {
           kucuk=dizi[i];
        }


        if(dizi[i]>kucuk)
        { 
            kucuk=dizi[i];            
        }
 }
}


int main()
{
    int dizi[5];
    for(int i=0;i<5;i++)
    {
        printf("%d sayıyı giriniz.", i+1);
        scanf("%d",&dizi[i]);
    }
    float ort=ortalamabul(dizi);
    printf("%f\n", ort);
    int enkocuk=enkucuk(dizi);
    printf("%d", enkocuk);


    return 0;
}
