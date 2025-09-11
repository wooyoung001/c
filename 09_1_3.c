#include<stdio.h>
int pibo(int n);
int num;
int main(void)
{
    printf("피보나치수열을 입력하시오");
    scanf("%d",&num);
    pibo(num);
    return 0;
}

int pibo(int n)
{
    int i=0;
    int i1=0,i2=1;
    int sum=0;
    while(i<n)
    {
        printf("%d",sum);
        i1=i2;
        i2=sum;
         sum=i1+i2;
        i++;
    }
}