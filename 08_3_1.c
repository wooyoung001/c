#include<stdio.h>
int main(void)
{
    int num;
    printf("숫자를 입력하시오");
    scanf("%d",&num);
    switch(num/10)
    {
    case 0:
        printf("0이상 10미만");
    case 1:
        printf("0이상 10미만");  
    case 2:
        printf("0이상 10미만");  
    default:
        printf("30이상");     
    }
    return 0;
}