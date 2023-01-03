//dizinin ortalama değerinden daha büyük olan değerlerin sayısını döndüren c kodu
#include <stdio.h>
int Sayac(int dizi[8]);
int main(){
    int dizi[8]; 
    for(int i=0; i<8; ++i){
        printf("Sayi giriniz=\t");
        scanf("%d",&dizi[i]); //sayıları gir
    }
    int ortalamadan_buyukler=Sayac(dizi); //fonksiyondan dönen dizi değeri=enbuyuk_deger
    printf("\nOrtalama değerden daha büyük olan değerlerin sayisi= %d\n",ortalamadan_buyukler); //Dizi içindeki sayıların ortalama değerinden daha büyük olan değerlerin sayısını yazar
    return 0;
}
int Sayac(int dizi[8]){
    int sayac=0; //Dizideki sayıların ortalama değerinden daha büyük olan değerlerin sayısını tutan sayac değişkeni tanımlandı.
    int toplam=0; 
    for(int i=0; i<8; ++i){ 
        toplam+=dizi[i]; //dizideki sayıların toplamı
        float ortalama=toplam/8; //ortalama
        if(ortalama<dizi[i]){ //eğer dizinin ortalama değeri şimdi girilen sayıdan küçükse sayacı bir artır.
            ++sayac;
        }  
    }
    return sayac;
}