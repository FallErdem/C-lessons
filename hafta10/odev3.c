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


int enbuyuk(int dizi[])
{
for(int i=0; i<5; i++)
 {
    int buyuk;
        if(i == 0)
        {
           buyuk=dizi[i];
        }


        if(dizi[i]>buyuk)
        { 
            buyuk=dizi[i];            
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
    int enboyuk=enbuyuk(dizi);
    printf("%d", enboyuk);


    return 0;
}
