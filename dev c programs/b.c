#include<stdio.h>
int mystrlen(char *);
int mystrcmp(char *,int);
int main(){
	char s1[50];
	int l,c;
	printf("Enter a string");
	gets(s1);
	l=mystrlen(s1);
	c=mystrcmp(s1,l);
	if(c==0){
		printf("Palindrome");
	}
	else{
		printf("Not Palindroe")
	}
	
}
int mystrlen(char *p){
	int i=0;
	while(*(p+i)!='\0'){
		i++;
	}
	return i;
}
int mystrcmp(char *p,int l){
	int i=0
	while(i<(l/2)){
		if(*(p+i)==*(p+l)){
			return 0;
		}
		else{
			return 1;
		}
	}
}


