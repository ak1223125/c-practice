#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    int arr[] = {2,4,7,8,12,9,26,3};
    for(int i = 0; i <= 7; i++)
    {
        if(i%2==0)
        {
        x = 10 + arr[i];
        printf("%d ",x);
        }
        else
        {
        y = 2 * arr[i];
        printf("%d ",y);
        }
    }
    return 0;
}
