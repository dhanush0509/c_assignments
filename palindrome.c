#include<stdio.h>
int main()
{
  char name[10] = " Madam ";
  int i,a;
  for( a = 0 ; 6 > a ; ++a)
  {
    printf("%c",name[a]);
  }
  printf("\n");
  for(i = 6 ; i > 0 ; --i)
  {
    printf("%c",name[i]);
  }
  printf("\n");
  if (name[a] == name[i])
  {
    printf(" Madam is a palindrome\n ");
  }
  else
  {
    printf(" Madam is not a palindrome\n ");
  }
}

