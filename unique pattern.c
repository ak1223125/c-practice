#include<stdio.h>

int main()
{
    for(int i = 1; i <= 4; i++)
    {
        for(int s = 4-i; s >= 1; s--)
        {
            printf(" ");
        }
        for(int j = i; j >= 2; j--)
        {
            printf("%d",j);
        }
        for(int k = 1; k <= i; k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}




