#include<stdio.h>

int main()
{
    int evensum = 0;
    int oddsum = 0;
    int result = 0;
    int a[8] = {20,15,40,10,12,17,8,9};
    for(int i = 0; i <= 7; i++)
    {
        if(i%2==0)
        {
            evensum += a[i];
        }
        else
            oddsum += a[i];
    }
    result = evensum - oddsum;
    printf("%d ", result);
    return 0;
}
