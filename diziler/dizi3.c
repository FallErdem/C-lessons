//dizinin en küçük elemanını döndüren c kodu
#include <stdio.h>
int EnKucukEleman(int dizi[8]);
int main(){
    int dizi[8]; 
    for(int i=0; i<8; ++i){
        printf("Sayi giriniz=\t");
        scanf("%d",&dizi[i]); //sayıları gir
    }
    int enkucuk_deger=EnKucukEleman(dizi); //fonksiyondan dönen dizi değeri=enbuyuk_deger
    printf("\nEn küçük değer= %d\n",enkucuk_deger); //dizi içindeki en küçük değeri ekrana yazdı
    return 0;
}
int EnKucukEleman(int dizi[8]){
    for(int i=0; i<8; ++i){ //ilk girilen sayı sonraki girilen sayılarla karşılaştır
        if(dizi[0]>dizi[i]){
            dizi[0]=dizi[i];
        }  
    }
    return dizi[0]; //en küçük sayıyı fonksiyon sonunda geri döndür.
}