#include <stdio.h>
#include <stdlib.h>
int decreasing(int n)
{
    if(n==0) return;
    printf("%d ", n);
    decreasing(n-1);
    return;
}

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}
