#include<stdio.h>
//#include<math.h>
//#include<limit.h>
//#include<stdbool.h>

int main()
{
    int sum = 0;
    int arr[2][2] = {{1,2},{5,8}};
    for(int i = 0; i< 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("the sum of an element of a matrix is %d",sum);
    return 0;
}
