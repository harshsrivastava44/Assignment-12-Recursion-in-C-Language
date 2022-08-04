//4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void Oddnum(int n)
{ int c;
     printf("%d ",(2*n-1));
    if(n!=1)
    {
     Oddnum(n-1);
    }

}
int main()
{
    int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
    Oddnum(x);
}
