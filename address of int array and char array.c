#include<stdio.h>
#include<string.h>
int main()
{
    int a[4] = {1,2,3,4};
    for(int i = 0; i < 4; i++)
    {
        printf("%p\n",&a[i]);
    }
    printf("\n");
    char b[4] = {'a','b','f','w'};
    for(int i = 0; i < 4; i++)
    {
        printf("%p\n",&b[i]);
    }
    return 0;
}


