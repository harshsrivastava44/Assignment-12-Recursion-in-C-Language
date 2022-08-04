//10. Write a recursive function to print reverse of a given number
#include<stdio.h>
void Reversenum(int n)
{

    if (n==0)
    return;
      printf("%d",n%10);
    Reversenum(n/10);



}
int main()
{ int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
   Reversenum(x);
}
