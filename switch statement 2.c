#include <stdio.h>
int main()
{
    int n;
    printf("enter a number to know day :");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("monday\n");
        break;
    case 2:
        printf("tuesday\n");
        break;
    case 3:
        printf("wednesday\n");
        break;
    case 4:
        printf("thrusday\n");
        break;
    case 5:
        printf("friday\n");
        break;
    case 6:
        printf("saturday\n");
        break;
    case 7:
        printf("sunday\n");
        break;
    default :
        printf("invalid number");
    }
    return 0;
}
