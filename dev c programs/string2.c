//if we dont use this function strlen alternate method..(using while loop)

#include<stdio.h>
#include<string.h>
int main ()
{
	int count=0;
	int i;
	char name[20];
	printf("enter name\n");
	gets(name);
    while(name[i]!='\0')
    {
    	count++;
    	i++;
	}
    printf("the length of string is %d",count);
	return 0;
}
