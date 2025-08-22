#include<stdio.h>
int main(void)
{
    int i=0,num=0,sum=0;
    while(i++<5)
    {
        printf("정수를 입력하시오");
        scanf("%d",&num);
        while(num<1)
        {
            printf("다시 입력하시오");
            scanf("%d",&num);
        }
        sum+=num;
        
    }
    printf("%d",sum);

}