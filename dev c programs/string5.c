//program to reverse the string using string functions
#include<stdio.h>
#include<string.h>
int main ()
{
	char name[20]="amuli";
	strrev(name);
	printf("%s",name);
    
}
/* ALTERNATE WITHOUT USING STRING STRREV FUNCTION 
   int main()
  {
   int i,l;
   char ch;
   char s1[20]="amuli";
   l=strlen(s1);
   for(i=0;i<=l/2;i++)
   {
   ch=s1[i];
   s1[i]=s1[l-1-i];
   s1[l-1-i]=ch;
   }
   printf("%s",s1);
}

