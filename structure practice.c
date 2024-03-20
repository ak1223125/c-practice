#include<stdio.h>
#include<string.h>
int main()
{
     typedef struct criketer{
     char name[30];
     int age;
     int number0ftestmatches;
     float averageruns;
    }cricketer;

    cricketer arr[3];
    for(int i = 0; i < 3; i++)
    {
        scanf("%[^\n]s",arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].number0ftestmatches);
        scanf("%f",&arr[i].averageruns);
    }

    for(int i = 0; i < 3; i++)
    {
        printf("Name :%s\n",arr[i].name);
        printf("Age : %d\n",arr[i].age);
        printf("Test matches : %d\n",arr[i].number0ftestmatches);
        printf("Average runs : %f\n",arr[i].averageruns);
    }
    return 0;
}





