#include <stdio.h>
int main(void)
{
    int  x1,x2,y1,y2,result1;
    printf("�»���� x y ��ǥ �Է�");
    scanf("%d %d",&x1,&y1);
    printf("���ϴ��� x y ��ǥ �Է�");
    scanf("%d %d",&x2,&y2);
    result1=(x2-x1)*(y2-y1);
    printf("%d",result1);
    return 0;

}