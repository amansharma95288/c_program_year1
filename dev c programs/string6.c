//c program to convert string in uppercase to lowercase using strlwr...
#include<stdio.h>
#include<string.h>
int main ()
{
	char s1[20]="AAAAMMMAAANNN";
	strlwr(s1);
	printf("%s",s1);
}
/*ALTERNATE METHOD WITHOUT USING STRING FUNCTION...*/
// for(i=0;s1[i]!='\0';i++)
// {
//  if(s1[i]>='A'&& s1[i]<='Z')
//  {
// 	s1[i]=s1[i]+32;
// }
// }
// printf("%s",s1);

