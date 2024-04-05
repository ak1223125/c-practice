#include <stdio.h>
int factorial(int c)
{
    int fact = 1;
    for(int i = 1; i <= c; i++)
    {
        fact = fact*i;
    }
    return fact;
}
int main()
{
    int n;
    printf("enter a number of n:");
    scanf("%d",&n);
    int r;
    printf("enter a number of r:");
    scanf("%d",&r);
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n-r);
    int result = nfact/(rfact*nrfact);
    printf("%d",result);
    return 0;
}
