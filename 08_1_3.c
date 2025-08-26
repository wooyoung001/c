#include<stdio.h>
int main(void)
{
    int kor,eng,math,sum;
    printf("국어 영어 수학 점수를 입력하시오");
    scanf("%d %d %d",&kor,&eng,&math);
    sum=(kor+eng+math)/3;
    if(sum>=90)
    {
        printf("A");
    }
    else if(sum>=80)
    {
        printf("B");
    }
    else if(sum>=70)
    {
        printf("C");
    }
    else if(sum>=50)
    {
        printf("D");
    }
    else
        printf("F");
    return 0;
}