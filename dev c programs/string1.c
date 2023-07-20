//using strlen library without function call..?

#include<stdio.h>
#include<string.h>
int main ()
{
	int count=0;
	char name[20];
	printf("enter name\n");
	gets(name);
	count=strlen(name);
    printf("the length of string is %d",count);
	return 0;
}
