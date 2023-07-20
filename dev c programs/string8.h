//STRING HANDLING LIBRARY FUNCTIONS USING FUNCTIONS...
 #include<stdio.h>
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
 	while(s[i]!='\0')
 	{
 		i++;
	 }
	 return i;
 }
