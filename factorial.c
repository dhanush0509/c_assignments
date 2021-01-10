#include<stdio.h>
int factorial(int n)
{
   int i;
   int f = 1;
   for( i = 1 ; i <= n ; i++ )
   f = f*i;
   return f;
}
int main()
{
   int n;
   int f = 1;
   printf("Enter a number \n");
   scanf("%d",&n);
   printf("%d = %d\n", n, factorial(n));
   return 0;
}
