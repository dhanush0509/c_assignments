#include<stdio.h>
int main()
{
  int i,a,b;
  for(i = 1; i <= 100; ++i)
  {
   b = 0;
    for(a = 1; a <= i; ++a)
    {
      if ( i%a == 0)
        b++;
    }
    if(b == 2)
      printf("%d \n",i);
  }
}  
