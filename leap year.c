#include <stdio.h>
#include <stdlib.h>

int main()
{

    int year;
    printf("enter the year: ");
    scanf("%d", &year);

    if(year % 4 == 0)
        printf("%d it is a leap year",year);
    else if(year % 4 != 0)
        printf("%d it is not a leap year",year);
    return 0;
}
