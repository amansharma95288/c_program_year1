#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
struct stack
{
	int data[max];
	int top;
}s;
int full(void);
int empty(void);
void push(int);
int pop(void);
void display(void);

int main()
{
	int item,choice;
	char option;
	s.top=-1;
	printf("implementation of stack\n");
	do{
		printf("stack menu\n");
		printf("1.push\n2.pop\n3.display\n4.exit\n");
		printf("enter your choice (1-4): ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the element to be inserted in the stack::");
				scanf("%d",&item);
				if(full())
				     printf("stack is full !,OVERFLOW!");
				else
				push(item);
				break;
				
			case 2:
				if(empty())
				    printf("stack is empty!,UNDERFLOW!");
				else
				{
				item=pop();
				printf("the popped element is %d",item);
				break;
			    }
			case 3:
				display();
				break;
			case 4:
				exit(0);
		}
		printf("do you want to continue??");
	    option=getchar();
	}
	while(option=='Y'|| option=='N');
	return 0;
}
int full()
{
	if(s.top>=max-1)
	return 1;
	else
	return 0;
}
int empty()
{
	if(s.top==-1)
	return 1;
	else 
	return 0;
}
void push(int item)
{
	s.top++;
	s.data[s.top]=item;
}
int pop()
{
	int item;
	item=s.data[s.top];
    s.top--;
    return(item);
}
void display()
{
	int i;
	if(empty())
	printf("stack is empty!");
	else
	{
	for(i=s.top;i>=0;i--)
	printf("%d",s.data[i]);
	}
}
