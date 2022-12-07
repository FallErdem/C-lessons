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

int kackezgecti(int dizi[], int aranan)
{
    int sayac=0;
    for(int i=0;i<5;i++)
    {
        if(dizi[i]==aranan)
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

    return 0;
}
