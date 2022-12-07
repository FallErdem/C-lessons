//Orttan büyük sayı
#include <stdio.h> 
int toplam=0;
float ort=toplam/5.0;
float ortalamabul(int dolas[])
{
    for(int i=0;i<5;i++)
    {
        toplam+=dolas[i];
    }

    return ort;
}

int kackezgecti(int dizi[], int aranan)
{
    int sayac=0;
    for(int i=0;i<5;i++)
    {
        if(ort<dizi[i])
        {
            sayac=sayac+1;
        }
        
    }
    return sayac;
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
    printf("%d kez geçti.", kackezgecti(dizi, 2));
    int buyuk=Sayac(dizi);
    printf("\nOrtalama değerden daha büyük olan değerlerin sayısı: %d\n",buyuk);
    return 0;
}
