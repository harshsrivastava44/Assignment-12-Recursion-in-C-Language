//9. Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void octalnum(int n)
{
  if (n==0)
  return;
    octalnum(n/8);
    printf("%d",n%8);
}
int main()
{ int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
    octalnum(x);
}