#include<stdio.h>
int maxnum(int n1,int n2,int n3)
{
    if(n1>n2)
        return (n1>n3)?n1:n3;
    else
        return (n2>n3)?n2:n3;
}
int minnum(int n1,int n2,int n3)
{
    if(n1<n2)
        return (n1<n3)?n1:n3;
    else
        return (n2<n3)?n2:n3;
}
int main(void)
{
    int num1,num2,num3;
    printf("세 개의 정수 입력:");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("가장 큰 정수의 합은:%d",maxnum(num1,num2,num3));
    printf("가장 큰 정수의 합은:%d",minnum(num1,num2,num3));
    return 0;
}
