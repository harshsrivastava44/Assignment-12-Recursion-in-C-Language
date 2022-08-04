//1. Write a recursive function to print first N natural numbers
#include<stdio.h>
void naturalnum(int n)
{
    if (n!=1)
    naturalnum(n-1);
    printf("%d ",n);


}
int main()
{ int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
    naturalnum(x);
}
