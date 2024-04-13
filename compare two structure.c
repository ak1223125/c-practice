#include <stdio.h>
#include <string.h>
#include<stdbool.h>
int main()
{
    struct birthday
    {
        int date;
        int month;
        int year;
    }/*d1,d2*/;
    struct birthday d1;
    d1.date = 15;
    d1.month = 5;
    d1.year = 2002;

    struct birthday d2;
    d2.date = 16;
    d2.month = 5;
    d2.year = 2002;

    bool x = true;
    if(d1.date==d2.date&&d1.month==d2.month&&d1.year==d2.year)
    {
        x = false;
    }

    if(x==false) printf("same birthday");
    else printf("birthday is not same");
    return 0;
}
