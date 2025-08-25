#include<stdio.h>
int main(void)
{
    int num,total;
    printf("정수를 입력하시오");
    scanf("%d",&num);
    for(total=1; num>0; num--)
    {
        total*=num;

    }
    printf("%d",total);
    return 0;
}