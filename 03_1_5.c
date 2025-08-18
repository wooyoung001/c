#include<stdio.h>
int main(void)
{
    int num1,num2,num3,result;
    printf("3개의 정수를 입력하시오");
    scanf("%d %d %d",&num1,&num2,&num3);
    result=(num1-num2)*(num2+num3)*(num3%num1);
    printf("%d",result);
    return 0;
}