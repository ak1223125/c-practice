#include<stdio.h>
void reverse(int a[])
{
    int i = 0;
    int j = 11;
    while(i<j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int a[12] = {1,2,3,4,5,6,7,8,9,10,11};
    reverse(a);
    for(int i = 1; i<=11; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
