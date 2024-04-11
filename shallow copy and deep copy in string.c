#include <stdio.h>
int main()
{
//    shallow copy
//    char str[] = "College wallah";
//    char* str1 = str;
//    str[0] = 'M';
//    printf("%s",str);


//  hard copy
    char str[] = "college wallah";
    int size = 0;
    for(int i =0; str[i]!='\0'; i++)
    {
        size++;
    }
    char str1[size];
    for(int i = 0, j = 0; str[i]!='\0',j <= size; i++,j++)
    {
        str1[j] = str[i];
    }
    printf("%p\n",str);
    printf("%p\n",str1);
    return 0;
}
