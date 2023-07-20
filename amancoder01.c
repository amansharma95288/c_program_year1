#include<stdio.h>
int main()
{
    int num1,num2,num3,big;
    printf("enter the values of num1,num2,num3\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    num1=big;
    if(num2>big)
     num2=big;
    if(num3>big)
     num3=big;
    printf("largest number is %d",big);
    return 0;
}