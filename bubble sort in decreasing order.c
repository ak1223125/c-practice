#include <stdio.h>
#include<stdbool.h>
//revese the bubble sort..
int main()
{
    int arr[5] = {1,2,3,4,5};//bubble sort in decreasing order
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        bool x = true;
        for(int j = 0; j < 4-i; j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                x = false;
            }
        }
        if(x == true) break;
    }
    printf("\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
