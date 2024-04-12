#include <stdio.h>
#include<stdbool.h>
int main()
{
    int arr[12] = {12,14,19,2,22,7,1,515,278,123,532,987};
    int n = 12;
    for(int i = 0; i < 12; i++)
    {
        printf("%d ",arr[i]);
    }
    bool flag = true;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                flag = false;
            }
        }
        if(flag==true) break;
    }
    printf("\n");
    for(int i = 0; i < 12; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
