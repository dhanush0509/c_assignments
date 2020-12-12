#include<stdio.h>
int main()
{
  int a = 1234;
  int i, n;
  printf(" Given number is : %d \n" , a);
  for (i = 0 ; a >0 ; a = a / 10 )
  {
    i = i * 10;
    i = i + a % 10;
  }
  printf(" the reverse number is %d \n" , i);
}
