
#include <stdio.h>

int main()
{
    int min = 99;
    int arr[7] = {22,34,56,78,99,12,45};
    for(int i= 0; i<=6; i++)
    {
        if(min>=arr[i])
            min = arr[i];
    }
    printf("%d",min);
    return 0;
}
