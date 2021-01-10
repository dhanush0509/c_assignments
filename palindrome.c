#include <stdio.h>
int main()
{
 char str[100],i;
 int a,b;
 b=0;
 printf("Enter the string : ");
 scanf("%s", str);
 for(i = 0; str[i] != '\0' ; ++i); 
 printf("Length of Str is %d\n", i);
for(a = 0; a < i; a++)
{
if ( str[a] != str[i-a-1])
b=1;
break;
}
if (b==0)
{
printf(" is a palindrome ");
}
else
{
printf(" not a palindrome ");
}
}


