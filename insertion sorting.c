#include <stdio.h>
#include<stdbool.h>
#include<limits.h>
// insertion sort
int main()
{
    int arr[5] = {5,6,3,2,9};
    int n = 5;
    printf("unsorted array :");
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i = 1; i < n-1; i++)
    {
    int j = i;
    while(j > 0 &&arr[j] < arr[j-1])
    {
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;
    }
    }
    printf("\n");
    printf("sorted array :");
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
