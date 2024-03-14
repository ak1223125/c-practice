#include<stdio.h>
//#include<math.h>
//#include<limit.h>
//#include<stdbool.h>

int main()
{
    int arr[2][3] = {1,2,3,4,5,6};
    for(int i = 0; i <= 1; i++)
    {
        for(int j = 0; j <= 2; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i <= 2; i++)
    {
        for(int j = 0; j <= 1; j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
