//5. Write a recursive function to print first N even natural numbers
#include<stdio.h>
void Evennum(int n)
{ int c;

    if(n!=1)
    {
     Evennum(n-1);
    }
    printf("%d ",(2*n));
}
int main()
{
    int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
    Evennum(x);
}
