#include<stdio.h>
int main(void)
{
    int num1,num2,abs;
    printf("두 개의 정수를 입력하시오");
    scanf("%d %d",&num1,&num2);
    abs= (num1>num2)?num1-num2:num2-num1;
    printf("%d",abs);
    return 0;
    
}