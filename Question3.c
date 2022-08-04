//3. Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void Oddnum(int n)
{ int c;

    if(n!=1)
    {
     Oddnum(n-1);
    }
    printf("%d ",(2*n-1));
}
int main()
{
    int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
    Oddnum(x);
}

