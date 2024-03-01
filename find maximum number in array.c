#include <stdio.h>

int main()
{
    int max =1;
    int arr[7] = {22,34,56,78,99,12,45};
    for(int i= 0; i<=6; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}
