#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1;
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 4-i; j++)
        {
            printf(" ");
        }
        for(int k = 1; k <= i; k++)
        {
            printf("%d ",a);
            a = a + 1;
        }
        printf("\n");
    }
    return 0;
}
