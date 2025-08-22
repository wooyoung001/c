#include <stdio.h>
int main(void)
{
    double sum=0,num3;
    int num2,i=0;
    printf("정수를 입력하시오");
    scanf("%d",&num2);
    while(i<num2)
    {
        printf("정수를 입력하시오");
        scanf("%lf",&num3);
        sum+=num3;
        i++;
    }
    printf("%f",sum/(double)num2);
    return 0;

}