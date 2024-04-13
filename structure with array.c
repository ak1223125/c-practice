#include <stdio.h>
#include <string.h>
//Q.1.Create a structure called "Student" with members name, age, and total marks.
//Write a C program to input data for two students, display their information,
//and find the average of total marks.
int main()
{

    struct student
    {
        char firstname[10];
        char lastname[10];
        int age;
        int total_marks;
    };

    struct student studentt[2];
    for(int i = 0; i < 2; i++)
    {
        scanf("%s",studentt[i].firstname);
        scanf("%s",studentt[i].lastname);
        scanf("%d",&studentt[i].age);
        scanf("%d",&studentt[i].total_marks);
    }
    printf("\n");
    for(int i = 0; i < 2; i++)
    {

        printf("Name : %s %s\n",studentt[i].firstname,studentt[i].lastname);
        printf("Age : %d\n",studentt[i].age);
        printf("Total marks : %d\n",studentt[i].total_marks);
        printf("\n");
    }
    return 0;
}
