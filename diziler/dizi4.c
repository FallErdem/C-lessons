//dizinin ikinci en büyük elemanını döndüren c kdou
#include <stdio.h>
int EnBuyukikinciEleman(int dizi[8]);
int max1; 
int max2;
int main(){
    int dizi[8]; 
    for(int i=0; i<8; ++i){
        printf("Sayi giriniz=\t");
        scanf("%d",&dizi[i]); //kullanıcı sayıları girdi.
    }
    int enbuyuk_deger=EnBuyukikinciEleman(dizi); //fonksiyondan dönen dizi değeri=enbuyuk_deger
    printf("\nİkinci en büyük değer= %d\n",enbuyuk_deger); //dizi içindeki ikinci en büyük değer yazıldı.
    return 0;
}
int EnBuyukikinciEleman(int dizi[8]){
    for(int i=0; i<8; i++) {
        if(dizi[i]>max1){
            max2 = max1;
            max1 = dizi[i];
        }
        else if(dizi[i] > max2 && dizi[i] < max1){
            max2 = dizi[i];
        }
    }
    return max2;//ikinci en büyük sayıyı fonksiyon sonunda geri döndür.
}