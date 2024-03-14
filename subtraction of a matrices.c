#include<stdio.h>
int main()
{
    int a[2][2];
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[2][2];
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            a[i][j] - b[i][j];
            printf("%d ",a[i][j]-b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
