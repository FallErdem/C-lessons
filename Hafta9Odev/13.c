//İsminizin baş harfini 10 defa alt alta yazdıran programın kodu
#include<stdio.h>
int tekrar(char isim)
{
    for(int x=1;x<=10;x++){
    printf("%c\n",isim);
    }

}

int main()
{
   char ad;
   printf("Yazılmasını istediğiniz ismi giriniz.");
   scanf("%c", &ad);
   tekrar(ad);

    return 0;
}