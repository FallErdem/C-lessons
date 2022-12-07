//En büyük 2. sayı
#include <stdio.h>
int max1,max2;
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

int EnBuyukİkinci(int dizi[5]){
    for(int i=0; i<8; i++) {
        if(dizi[i]>max1)
        { 
            max2 = max1;
            max1 = dizi[i];
        }
        else if(dizi[i] > max2 && dizi[i] < max1){
            max2 = dizi[i];
        }
    }
    return max2;
}

int main()
{
    int dizi[8]; 
    for(int i=0; i<8; ++i){
        printf("Sayi giriniz:\t");
        scanf("%d",&dizi[i]); 
    }
    int enbuyuk=EnBuyukİkinci(dizi);
    printf("\nIkinci en buyuk deger: %d\n",enbuyuk);
    return 0;
}