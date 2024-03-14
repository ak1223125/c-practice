#include<stdio.h>

int main()
{
    int a[12] = {1,2,3,4,5,6,7,8,9,10,11};
    int reverse[12];
    for(int i = 0; i <= 11; i++)
    {
        reverse[i] = a[11-i];
    }
    for(int i = 1; i <= 11; i++)
    {
        printf("%d ", reverse[i]);
    }
    return 0;
}
