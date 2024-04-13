#include <stdio.h>
#include <string.h>
//Q.2.Define a structure named Time with members hours,
//minutes, and seconds.
//Write a C program to input two times, add them,
//and display the result in proper time format.
int main()
{

    struct time
    {
        int hrs;
        int min;
        int sec;
    };
    struct time arr[2];
    for(int i = 0; i < 2; i++)
    {
        scanf("%d",&arr[i].hrs);
        scanf("%d",&arr[i].min);
        scanf("%d",&arr[i].sec);
    }

        printf("%d:%d:%d",arr[0].hrs+arr[1].hrs,arr[0].min+arr[1].min,arr[0].sec+arr[1].sec);
    return 0;
}
