//8. Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void Binarynum(int n)
{
  if (n>0)
    Binarynum(n/2);
    printf("%d",n%2);
}
int main()
{ int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
    Binarynum(x);
}
