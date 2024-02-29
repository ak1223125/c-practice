#include <stdio.h>


int main()
{
   int arr[] = {95,90,31,25,100,50,65,89,97,30};
   for(int i = 0; i<10; i++)
   {
         printf("%p\n",&arr[i]);
   }
    return 0;
}
