#include<stdio.h>
int main(void)
{
    int num1=0,num2=0;
    printf("양수 정수를 입력하시오");
    scanf("%d",&num2);
    while(num1<num2)
    {
        printf("hello world\n");
        num1++;
    }
    return 0;
}