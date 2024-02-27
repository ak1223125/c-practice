#include <stdio.h>

int fib(int n)
{
    int result;
    int a = 0;
    int b = 1;
    for(int i = 1; i<= n; i++)
    {
      result = a + b;
      printf("%d ",b);
      a = b;
      b = result;
    }
}
int main()
{
    int n;
    printf("enter the number of term:");
    scanf("%d",&n);

    fib(n);
    return 0;
}
