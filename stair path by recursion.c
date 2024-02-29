#include <stdio.h>
int pathofclimbstair(int n)
{
    if(n==1) return 3;
    if(n==2||n==3) return 2;
    return pathofclimbstair(n-1)+ pathofclimbstair(n-2)+ pathofclimbstair(n-3);
}

int main()
{
    int a;
    printf("enter a number of stair:");
    scanf("%d",&a);
    int x = pathofclimbstair(a);
    printf("%d ",x);
    return 0;
}
