#include <stdio.h>

void swap(int* a, int* b)//call by reference
{
    int temp ;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main()
{
    int x;
    printf("enter a number of x:");
    scanf("%d",&x);
    int y;
    printf("enter a number of y:");
    scanf("%d",&y);
    printf("the value of x and y is %d and %d\n",x,y);
    swap(&x,&y);
    printf("the value of x and y is %d and %d\n",x,y);
    return 0;
}
