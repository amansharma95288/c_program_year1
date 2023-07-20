//STRING HANDLING LIBRARY FUNCTIONS USING FUNCTIONS...STRCPY
 #include<stdio.h>
 void mystrcpy(char[],char[]);
 int main ()
 {
 	char name1[30];
	char name2[30];
 	printf("enter string\n");
 	gets(name1);
 	mystrcpy(name2,name1);
    puts(name2);
 	return 0;
 }
 
  void mystrcpy(char name[30],char name2[30])
 {
 	int i=0;
 	while(name[i]!='\0')
	{
		name2[i]=name[i];
		i++;
	}
	 name2[i]='\0';
 }
