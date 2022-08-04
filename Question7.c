//7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void Squarenum(int n)
{
    if (n!=1)
  Squarenum(n-1);
    printf("the squre of %d = %d \n",n,n*n);


}
int main()
{ int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
    Squarenum(x);
}
