#include<stdio.h>
int main(void)
{
    int num1,num2,total=0;
    printf("�� ���������� �Է��Ͻÿ�");
    scanf("%d %d",&num1,&num2);
    for( ; num1<num2+1 ;)
    {
        total+=num1;
        num1+=1;

    }
    printf("%d",total);
    return 0;
}