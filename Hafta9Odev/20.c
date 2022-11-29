//Kulanıcı tarafından klavyeden girilen tamsayının tek/çift durumunu ekrana yazan program
#include <stdio.h>

int tekcift(int x1)
{
 if((x1%2)==0)
    {
      printf("%d çifttir.",x1);
    }
 else
    {
      printf("%d tektir.",x1);
    }
 
}


int main()
{
   int x;
   printf("Bir tamsayı giriniz.");
   scanf("%d",&x);
   tekcift(x);
   return 0;
}