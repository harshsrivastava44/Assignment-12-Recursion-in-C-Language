//2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void natnumrev(int n)
{
     printf("%d ",n);
    if(n!=1)
    natnumrev(n-1);

}
int main()
{
    int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
    natnumrev(x);
}
