#include <stdio.h>
double celtofah(double tem);
double fahtocewl(double tem);

int main(void)
{
    int num;
    double tem;
    printf("섭씨 온도는 1번 화시 온도는 2번을 고르시오");
    scanf("%d",&num);
    if(num==1)
    {
       
        printf("%f",celtofah(tem));
    }
    else
    {
         scanf("%lf",&tem);
        printf("%f",fahtocewl(tem));
    }
    return 0;
}

double celtofah(double tem)
{
    return (1.8*tem)+32.0;
}

double fahtocewl(double tem)
{
    return (tem-32)/1.8;
}