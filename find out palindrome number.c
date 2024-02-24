#include <stdio.h>

int palindrome(int n)
{
     int reversed = 0;
     int originalnumber = n;
     while(n != 0)
     {
         reversed = reversed*10 + n%10;
         n = n/10;
     }
     printf("the reversed number is %d\n",reversed);
     return reversed;
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    int m = palindrome(n);


    if (n == m)
     {
        printf("the given number is a palindrome %d\n",m);
     }
     else
     {
        printf("the given number is not a palindrome %d\n",m);
     }

}
