//üçgenin çeşidini söyleyen program kodu
#include <stdio.h>
int necibu(int x1,int x2,int x3)
{
  if(x1==x2 && x2==x3)
   {
     printf("Eşkenar Üçgen");
   }
  else if(x1!=x2 && x1!=x3 && x2!=x3)
   {
     printf("Çeşitkenar Üçgen");
   }
  else
   {
     printf("İkizkenar Üçgen");
   }

}


int main()
{
int a,b,c;
printf("Üçgenin kenar uzunluklarını giriniz.");
printf("a : "); 
scanf("%d",&a);
printf("b : "); 
scanf("%d",&b);
printf("c : "); 
scanf("%d",&c);
necibu(a,b,c);
return 0;
}
