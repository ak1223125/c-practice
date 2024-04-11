#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,9};
    int sum = 0;
    int sumofnaturalnumber1to10 = 45;
    for(int i = 0; i < 10; i++)
    {
        sum +=arr[i];
    }
    printf("%d",sum-sumofnaturalnumber1to10);
    return 0;
}
