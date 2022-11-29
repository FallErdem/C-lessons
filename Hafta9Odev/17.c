#include <stdio.h>
int yildiz(int a,int c)
{
 int x1,b,x2;    //burdaki a değeri a>=c olacak şekilde girilmelidir.
 for(a=x1;a<=11;a++)
  {
    for(c=x2;c>=a;c--)
    printf(" ");
    
    for(b=0;b<a*2-1;b++)
    printf("*");
    
    
    printf("\n");
  }
    return 0;
}

int main()
{
    int a,c;
    printf("Sırasıyla a ve b değerleri giriniz.");
    scanf("%d%d", &a,&c);
    yildiz(a,c);
    return 0;

}