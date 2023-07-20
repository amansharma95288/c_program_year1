
// code for inserting an element in queue...//ENQUEUE..

#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
int a[maxsize];
int front=-1,rear=-1;
void enqueue(int x)
{
	if(rear==maxsize-1)
	{
		printf("OVERFLOW\n");
	}
	else if(rear==-1||front==-1)
	{
		front=rear=0;
		a[rear]=x;
		printf("element inserted\n");
	}
	else
	{
	    rear++;
	    a[rear]=x;
	    	printf("element inserted\n");
	}
}
void display()
{
	int i;
	for(i=0;i<maxsize-1;i++)
	{
		printf("%d\n",a[i]);
	}
}
int main()
{ int i=5;  
while(i!=0)
  {
	printf("enter the element\n");
	int x;
	scanf("%d",&x);
	enqueue(x);
	i--;
}
	display();
	return 0;
}
