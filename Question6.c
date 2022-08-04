//6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void Evennum(int n)
{ int c;
     printf("%d ",(2*n));
    if(n!=1)
    {
     Evennum(n-1);
    }

}
int main()
{
    int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
    Evennum(x);
}
