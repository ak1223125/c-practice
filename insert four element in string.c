#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10] = "smith";
    for(int i = 0; i < 11; i++)
    {
        str[9-i] = str[5-i];
    }
    str[0] = 'W';
    str[1] = 'i';
    str[2] = 'l';
    str[3] = 'l';
    printf("%s",str);
    return 0;
}
