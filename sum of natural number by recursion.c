#include <stdio.h>
void sum(int n,int x)
{
    if(n==0)
    {
        printf("%d",x);
        return 0;
    }
    sum(n-1,x+n);
    return;
}

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}
