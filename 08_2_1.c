#include<stdio.h>
int main(void)
{
    int i,j;
    for(i=1; i<9; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i%2==0)
            {
                printf("%d*%d=%d\n",i,j,i*j);
                continue;
            }
            else
                break;
        }
    }
    return 0;
}