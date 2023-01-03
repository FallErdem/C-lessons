//Dizinin en büyük elemanını döndüren c kodu
#include <stdio.h>
int EnBuyukEleman(int dizi[8]);//int mainin altında olduğundan tekrar çağırdım
int main(){
    int dizi[8]; 
    for(int i=0; i<8; ++i){
        printf("Sayi giriniz=\t");
        scanf("%d",&dizi[i]); //sayıları gir
    }
    int enbuyuk_deger=EnBuyukEleman(dizi); //fonksiyondan dönen dizi değeri=enbuyuk_deger
    printf("\nEn büyük değer= %d\n",enbuyuk_deger); //dizi içindeki en büyük değer ekrana yazılır
    return 0;
}
int EnBuyukEleman(int dizi[8]){
    for(int i=0; i<8; ++i){ //İlk girilen sayı sonraki girilen sayılarla karşılaştır
        if(dizi[0]<dizi[i]){
            dizi[0]=dizi[i];
        }  
    }
    return dizi[0];
}