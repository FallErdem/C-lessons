//Kullanicinin parametre olarak girdiği bir değerin dizi içinde kaç kez geçtiğini döndüren c kodu
#include <stdio.h>
int KacKezGectigi(int dizi[8], int aranan);


int main(){
    int dizi[8]; int aranan; 
    for(int i=0; i<8; ++i)
    {
        printf("Sayi giriniz=\t");
        scanf("%d",&dizi[i]);
    }
    printf("\nAranan degeri giriniz=\t"); 
    scanf("%d",&aranan); //Aranan deger girilir
    int ardeger=KacKezGectigi(dizi,aranan); //sayacı ardeger'e eşitledim
    printf("\nAranan değer %d kez geçti.\n",ardeger); //ardeger dizide kaç kere geçti?
    return 0;
}

int KacKezGectigi(int dizi[8], int aranan){
    int sayac=0; //Aranan sayının kaç kez geçtiğini tutan bir sayaç tanımlandı.
    for(int i=0; i<8; ++i){
        if(dizi[i]==aranan){
            ++sayac;
        }  
    }
    return sayac;
}