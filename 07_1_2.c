#include<stdio.h>
/*int main(void)
{
    int num=1,num2,sum;
    printf("정수를 입력하시오");
    scanf("%d",&num2);
    while(num<=num2)
    {
        sum=3*num;
        printf("%d\n",sum);
        num++;
    }
    return 0;
}*/
int main(void)
{
    int num=0,cnt=0;
    printf("배수의 갯수");
    scanf("%d",&num);
    while(cnt++<num)
    {
        printf("%d",3*cnt);
    }
    return 0;
}