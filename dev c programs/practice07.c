#include<stdio.h>
int find_sum(int ,int );
int main()

{
	int a,b,c;
	printf("enter 2 number");
	scanf("%d,%d",&a,&b);
	
	c=find_sum(a,b);
    printf("%d",c);
	return 0;	
}

int find_sum(int c,int d)
{
	return c+d;
}
