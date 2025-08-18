#include <stdio.h>
int main(void)
{
    int num1, num2, num3, result;
    printf("3개의 정수를 입력하세요");
    scanf("%d %d %d",&num1, &num2, &num3);
    result=num1*num2+num3;
    printf("%d*%d+%d=%d",num1,num2,num3,result);
}