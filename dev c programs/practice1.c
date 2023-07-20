#include<stdio.h>
int main ()
{
int i,j,n,k,temp;
printf("enter the vlaue of n for the pyramid rows\n");
scanf("%d",&n);
for(i=1;i<=(n/2)+1;i++)
{
	for(j=1;j<=n/2+1-i;j++)
	{
		printf(" ");
	}
	for(k=1;k<=2*i;k++)
	{
		printf("*");
	}
	printf("\n");
	
}
temp=n-2;
for(i=1;i<=n/2;i++)
{
	for(j=1;j<=i;j++)
	{
		printf(" ");
	}
	for(k=1;k<=temp;k++)
	{
		printf("*");
	}
	temp=temp-2;
	printf("\n");
}

return 0;
}
