#include<stdio.h>
int main()
{
    int m1,m2,m3,m4;
    float avg;
    printf("enter marks in 4 subjects");
    scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
    avg=(m1+m2+m3+m4)/4;
    if(avg<33)
    {
        printf("fail");
    }
    printf("%f",avg);
    return 0;
}