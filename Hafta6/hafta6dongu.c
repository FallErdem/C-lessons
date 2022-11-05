#include <stdio.h>
int main ()
{
 float sonuc=0;
 int ndegeri=1;
 for(int k=1;k<=ndegeri;k++)
 {
   sonuc+=(k+1.0)/k;
 }
  printf("%f\n", sonuc);
 return 0;
}



 //girilen sayıya göre üçgen oluşturmaya çalışan kod sayı miktarı kadar * sayısı
 //* 1
 //** 2
 //*** 3
//ödev: üstteki yine ama yıldızlar arasında boşluk olacak
//      *
//     ***
//    ***** gibi


 int n=5;
 float toplam=0;
 for(int k=1;k<=n;k++)
 {
    toplam+=(k+1.0)/k; //burda 1.0 ı floata çevirebilmekiçin yaptık
 }
printf("%f\n", toplam);


//while ile yapmakiçin
 int n=3, k=1;
 float toplam=0;
 while(k<=n)
 {
    toplam+=(k+1.0)/k;
    ++k;
 }

//do while ile nasıl yapılır

int n=3,k=1;
float toplam=0;
do{
    toplam+=(k+1.0)/k;
    ++k;


}while; //burdaki noktalı virgüle dikkat



    return 0;
}




#include <stdio.h>
int main ()
{
int n=3,k=1;
float toplam=0;
do{
    toplam+=(k+1.0)/k;
    ++k;
    }while;
return 0;
}
