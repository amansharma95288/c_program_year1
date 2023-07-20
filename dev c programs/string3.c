//write a c program to concatinate 2 strings using libray functions
#include<stdio.h>
#include<string.h>
int main ()
{
	char s1[20]="Aman";
	char s2[30]="Sharma";
	strcat(s1,s2);
	printf("%s",s1);
	return 0;
	
}

//logic of without using this strcat function .only logic
// int len1,len2;
// len1=strlen(s1);
// len2=strlen(s2);
// for(i=0;i<=len2;i++)
// {
//   s1[len1+i]=s2[i];
//  }
// printf("%s",s1);

