#include <stdio.h>

int areaofrectangle(int length ,int breadth)
{
    int area;
    area = length * breadth;
    return area;
}
int main()
{
   int l = 5 , b = 4;
   int area = areaofrectangle(l,b);
   printf("%d\n", area);
   return 0;
}
