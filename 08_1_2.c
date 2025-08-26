#include<stdio.h>
int main(void)
{
    int num1,num2;
    printf("두 개의 정수를 입력하시오");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        printf("%d",num1-num2);
    }
    else
    {
        printf("%d",num2-num1);
    }
    return 0;
}