#include<stdio.h>
int main()
{
  int i,a,b;
  for(i = 1; i <= 100; ++i)
  {
   b = 0; // when remainder of a number becomes 0 then b value increases//
    for(a = 1; a <= i; ++a)
    {
      if ( i%a == 0) //if remainder becomes 0 which means that number is divisible by that number//
        b++;// when remainder becomes o b value increases//
    }
    if(b == 2)//when a number is divisible by 1 and itself is known as a prime number and b value should be 2//
      printf("%d \n",i);
  }
}  
