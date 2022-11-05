#include <stdio.h>
int main()
{
int ales=30;
 printf("Ales Puanı: %d\n", ales);
int yds=80;
 printf("YDS Puanı: %d\n", yds);
int mo=40;
 printf("Mezuniyet Ortalaması: %d\n", mo);
double arito;
 arito=(ales/2)+(yds/4)+(mo/4);
 printf("Ağırlıklı Ortalamanız: %lf\n", arito);
 
if (yds<70)
{
    printf("Başvuru için yeterli YDS puanına sahip değilsiniz.");
}

if (yds>=70)
 {
    if (arito>=60)
    {
        printf("Başvuru Yapabilirsiniz.");
    }
    if (arito<60)
    {
        printf("Başvuru için yeterli Ağırlıklı Ortalamaya sahip değilsiniz.");
    }
 }






    return 0;
}