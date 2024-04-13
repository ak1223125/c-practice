#include <stdio.h>
#include <string.h>
// deep copy in structure
int main()
{

    struct student
    {
        char name[10];
        int roll;
        int marks;
    }s1,s2;

    //struct student s1;
    strcpy(s1.name,"aman kr");
    s1.roll = 31;
    s1.marks = 100;

    //struct student s2;
    s2 = s1;
    strcpy(s2.name,"raj kumar");
    s2.marks = 200;


    printf("%d",s1.marks);
    return 0;
}
