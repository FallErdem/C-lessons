#include<stdio.h>
int vki(int kilo, double boy)
{
    float ki;
    boy=boy/100;
printf("Kilo: %d\n", kilo);
printf("Boy: %lf\n", boy*100);
    ki=kilo/(boy*boy);
    printf("Vücut Kitle İndeksi: %f\n", ki);

 if (ki<18)

 {
    printf("Zayıfsınız.");
 }
 if (ki>=18 && ki<25)
 {
    printf("İdeal Kilodasınız.");
 }
 if (ki>=25 && ki<30)
 {
    printf("Fazla Kilolusunuz.");
 }
 if (ki>=30)
 {
    printf("Obezsiniz.");
 }
}

int main()
{
    int kilo,boy;
    printf("Sırayla kilonuzu ve boyunuzu (cm cinsinden) giriniz.");
    scanf("%d%d", &kilo,&boy);
    vki(kilo,boy);
    return 0;
}