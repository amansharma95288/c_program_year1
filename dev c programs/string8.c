//STRING HANDLING LIBRARY FUNCTIONS USING FUNCTIONS...(STRLEN)
 #include<stdio.h>
 int mystrlen(char[]);
 int main ()
 {
 	char s1[30];
 	int l;
 	printf("enter string\n");
 	gets(s1);
 	l=mystrlen(s1);
 	printf("the length of string is %d",l);
 	return 0;
 }
 
 int mystrlen(char s1[30])
 {
 	int i=0;
 	while(s1[i]!='\0')
 	{
 		i++;
	 }
	 return i;
 }
