//Klavyeden girilen 1-7 arasındaki sayı değerine göre o sıradaki günün ismini veren programın kodu
#include<stdio.h>
int gun(char day)
{
    switch(day)
    {
        case 1 : printf("Pazartesi");break;
        case 2 : printf("Salı");break;
        case 3 : printf("Çarşamba");break;
        case 4 : printf("Perşembe");break;
        case 5 : printf("Cuma");break;
        case 6 : printf("Cumartesi");break;
        case 7 : printf("Pazar");break;
        default: printf("1 ile 7 arasında bir sayı giriniz.");
    }

}

int main()
{
    char x;
    printf("Sayı değerini giriniz.");
    scanf("%c", &x);
    gun(x);
    return 0;
}