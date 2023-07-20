#include<stdio.h>
int main ()
{
	int a[3],b[3],sum[3],i;
	printf("elements of array1\n");
	for(i=0;i<3;i++) 
	{ 
	  scanf("%d",&a[i]);	
    }
    for(i=0;i<3;i++) 
	{ 
	  printf("%d\t",a[i]);	
    }
    printf("\nelements of array 2nd\n");
    for(i=0;i<3;i++) 
	{ 
	  scanf("%d",&b[i]);	
    }

    for(i=0;i<3;i++) 
	{ 
	  printf("%d\t",b[i]);	
    }
    for(i=0;i<3;i++) 
    {
    sum[i]=a[i]+b[i];
    printf("\nthe sum of element of array at index %d is = %d",i,sum[i]);
    } 
	return 0;
}
