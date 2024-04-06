#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[8] = {1,2,3,4,5,6,8,9};
    int sum = 12;
    for(int i = 0; i <= 7; i++)
    {
        for(int j = i+1; j <= 7; j++)
        {
            for(int k = j+1; k <= 7; k++)
            {
                if(arr[i]+arr[j]+arr[k]==sum)
                {
                    printf("(%d,%d,%d) ",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    return 0;
}
