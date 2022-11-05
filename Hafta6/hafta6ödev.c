#include <stdio.h>
int main ()
{
 int a;
 for(a=1;a<=16;a++)
  {
    for(int b=0;b<a;b++)
    {
      printf("*");
    }
    printf("\n");
  }
return 0;
}