#include <stdio.h>
int main()
{
int kilo=105;
double boy=170;
boy=boy/100;
printf("Kilo: %d\n", kilo);
printf("Boy: %lf\n", boy*100);

int vki;
vki=kilo/(boy*boy);
printf("Vücut Kitle İndeksi: %d\n", vki);

 if (vki<18)

 {
    printf("Zayıfsınız.");
 }
 if (vki>=18 && vki<25)
 {
    printf("İdeal Kilodasınız.");
 }
 if (vki>=25 && vki<30)
 {
    printf("Fazla Kilolusunuz.");
 }
 if (vki>=30)
 {
    printf("Obezsiniz.");
 }


return 0;
}