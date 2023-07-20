
#include<stdio.h>
int main ()
{
	int num= 45,guess_number;
	printf("enter the number(1-50)\n");
	while(1)
	{
		scanf("%d",&guess_number);
	
		if(guess_number>num)
		{
			printf("wrong! enter a small number\n");
		}
		else if(guess_number<num)
		{
			printf("wrong! enter a greater number\n");
		}
	    else
		{
			printf("congratulation!! correct guess");
			break;
		}
	}
	return 0;
}

