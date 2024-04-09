#include<stdio.h>
int main()
{
    char str[8] = "racecar";
    char i = 0;
    char j = 6-i;
    while(i<j)
    {
        char temp = str['i'];
        str['i'] = str['j'];
        str['j'] = temp;
        i++;
        j--;
    }
    printf("%s",str);
    return 0;
}
