#include<stdio.h>
int main(void)
{
    int num1,num2,result1,result2;
    printf("두 개의 정수를 입력하시오");
    scanf("%d %d",&num1,&num2);
    result1=num1/num2;
    result2=num1%num2;
    printf("%d %d",result1,result2);
    return 0;

}