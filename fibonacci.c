#include<stdio.h>
int fibonacci(int n)
{
int a=0, b=1,c,i;
for(i=0;i<=n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d\n",c);
}
return 0;
}
int main()
{
int n;
printf(" enter a number :");
scanf("%d",&n);
fibonacci(n);
return 0;
}
