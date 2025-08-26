#include <stdio.h>
int main(void)
{
    int i,j;
    for(i=1; i<10; i++)
    {
        for(j=1; j<10; j++)
        {
            if((10*i+j)+(10*j+i)==99)
            {
                printf("%d %d\n",i ,j);
                
            }
           continue;
        }
    }
    return 0;
}