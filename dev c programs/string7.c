//write a c program to copy one string to other ...
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char name[30];
	char name2[30];
	gets(name);
	while(name[i]!='\0')
	{
		name2[i]=name[i];
		i++;
	}
	printf("the new string is = %s",name2);
	return 0;
}
