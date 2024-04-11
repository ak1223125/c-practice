#include <stdio.h>
int main()
{
    int target = 12;
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int i = 0;
    int j = 8;
    while(i< j)
    {
        if(arr[i]+arr[j] == target)
        {
            printf("%d = %d + %d",arr[i]+arr[j],arr[i],arr[j]);
            break;
        }
        else if(arr[i]+arr[j] < target)
        {
            i++;
        }
        else if(arr[i]+arr[j] > target)
        {
            j--;
        }
    }
    return 0;
}
