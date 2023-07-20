
// code for inserting an element in queue...//deQUEUE..

#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
int a[maxsize];
int front=-1,rear=-1;
void enqueue()
{
	int x;
    printf("enter the element\n");
    scanf("%d",&x);
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
void dequeue()
{   
    int item;
	if(rear==front==-1)
	{
		printf("UNDERFLOW\n");
	}
	else if(front =rear)
	{
	  front==rear==1;
	}
	else
	{
	    item=a[front];
	    front++;
	   	printf("element deleted successfully\n");
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
{

//	printf("enter the element\n");
//	int x;
//	scanf("%d",&x);
	dequeue();
	display();
	return 0;
}
