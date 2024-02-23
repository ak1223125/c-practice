#include <stdio.h>
#include <stdlib.h>
factorial(int n)
{
    int fact;
    if(n == 1 || n == 0)
        return 1;
    else
      fact = n*factorial(n-1);
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    factorial(n);

    printf(" the factorial is %d",factorial(n));
    return 0;
}
