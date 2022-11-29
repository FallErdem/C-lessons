//Klavyeden yaşı girilen bir kişinin okula başlayıp başlayamayacağını gösteren C kodu(okul başlama yaşı 7dir.)
#include<stdio.h>
int yas(int x1)
{
    if(x1>=7)
    {
        printf("Okula başlayabilir.");
    }
    else{
        printf("Okula başlayamaz.");
    }
}

int main()
{
    int yas1;
    printf("Yaşınızı giriniz.");
    scanf("%d", &yas1);
    yas(yas1);
    return 0;
}