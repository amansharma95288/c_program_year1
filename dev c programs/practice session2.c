#include<stdio.h>
int main()
{
	int a[10],big,small,i,n;
	printf("enter the size of the array:\n");
	scanf("%d",&n);
	printf("enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}  
     big=a[0];
     small=a[0];
     for(i=1;i<n;i++)
     {
     	if(a[i]>big)
     	{
     		big=a[i];
		 }
		if(a[i]<small)
		{
			small=a[i];
		}
		printf("biggest number is :%d and smallest number is %d",big,small);
	 }
	 return 0;
}
