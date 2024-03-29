#include<stdio.h>
int main()
{
    for(int i = 1; i <= 4; i++)
    {
        int a = 65;
        for(int s = 1; s <= 4-i; s++)
        {
            printf(" ");
        }
        for(int j = 1; j <= 2*i-1; j++)
        {
            printf("%c",a);
            a = a + 1;
        }
        printf("\n");
    }
    return 0;
}
