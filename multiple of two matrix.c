#include<stdio.h>
int main()
{
    int n;
    printf("enter a 1st matrix number of rows :");
    scanf("%d",&n);
    int m;
    printf("enter a 1st matrix number of columns :");
    scanf("%d",&m);
    int arr[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int p;
    printf("enter a 2nd matrix number of rows :");
    scanf("%d",&p);
    int q;
    printf("enter a 2nd matrix number of columns :");
    scanf("%d",&q);
    int brr[p][q];
    for(int i = 0; i < p; i++)
    {
        for(int j = 0; j < q; j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    printf("\n");
    int cr = m;
    int result[n][q];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < q; j++)
        {
            result[i][j] = 0;
             for(int k = 0; k < cr; k++)
             {
                 result[i][j] += arr[i][k]*brr[k][j];
             }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < q; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
