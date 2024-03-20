#include<stdio.h>
int main()
{
    struct book
    {
        char name[50];
        int price;
        int no0fpages;
    }a,b,c;
    strcpy(a.name,"geography");
    a.price = 210;
    a.no0fpages = 300;

    strcpy(b.name,"arithmetics");
    b.price = 450;
    b.no0fpages = 230;

    strcpy(c.name,"general knowledge");
    c.price = 600;
    c.no0fpages = 478;

    printf("%s\n",a.name);
    printf("%d\n",b.price);

    return 0;
}




