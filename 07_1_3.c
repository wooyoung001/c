#include<stdio.h>
/*int main(void)
{
    int num=1,sum=0;
    while(num!=)
    {
        printf("정수를 입력하시오");
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("%d",sum);
    return 0;
}*/

int main(void)
{
    int num,sum=0;
    printf("정수를 입력하시오");
    scanf("%d",&num);
    sum=sum+num;
    while(num!=0)
    {
        printf("정수를 입력하시오");
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("%d",sum);
    return 0;
}
