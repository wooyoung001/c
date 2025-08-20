#include <stdio.h>
int main(void)
{
    int  x1,x2,y1,y2,result1;
    printf("좌상단의 x y 좌표 입력");
    scanf("%d %d",&x1,&y1);
    printf("우하단의 x y 좌표 입력");
    scanf("%d %d",&x2,&y2);
    result1=(x2-x1)*(y2-y1);
    printf("%d",result1);
    return 0;

}