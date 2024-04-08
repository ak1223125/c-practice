#include<stdio.h>
//swap two number using function
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return ;
}
int main()
{
    int a = 1;
    int b = 2;
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d",a,b);

    return 0;
}
