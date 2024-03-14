#include<stdio.h>

int main()
{
    int x = 15;
    int y = 0;
    int a[12] = {2,13,0,5,6,1,8,9,4,3,10,11};
    for(int i = 0; i <= 11; i++)
    {
        for(int j = i+1; j <=11; j++)
        {
            for(int k = j+1; k <= 11; k++)
            {
            if(a[i]+a[j]+a[k] == x)
            {
                y++;
                printf("(%d,%d,%d)\n",a[i],a[j],a[k]);
            }
            }
        }
    }
    printf("The total number of sum of triplets is %d ",y);
    return 0;
}
