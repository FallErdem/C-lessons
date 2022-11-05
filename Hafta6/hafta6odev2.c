#include <stdio.h>
int main()
{
 int a,b,c;    //burdaki a değeri a>=c olacak şekilde girilmelidir.
 for(a=1;a<=11;a++)
  {
    for(c=15;c>=a;c--)
    printf(" ");
    
    for(b=0;b<a*2-1;b++)
    printf("*");
    
    
    printf("\n");
  }
    return 0;
}