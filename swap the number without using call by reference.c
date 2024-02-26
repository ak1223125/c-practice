#include <stdio.h>

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int m;
    printf("enter a number:");
    scanf("%d",&m);
    int t = n;
    n = m;
    m = t;

    printf("the number is %d\n",n);
    printf("the number is %d\n",m);

    return 0;
}
