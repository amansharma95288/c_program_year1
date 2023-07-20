#include<stdio.h>
int main ()
{
	int i,j,k,n;
	printf("enter the number of rows you want to see in the pyramid");
	scanf("%d",&n);
	for(i=1;i<=(n/2)+1;i++)
	{
		for(j=1;j<(n/2)+1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=(n/2)+1;k++)
		{
			printf("*");
		}
    	printf("\n");
	}
	return 0;
}
