#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1;
void push()
{
    int x;
    printf("enter the element:\n");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("stack is full\n");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

int pop()
{
    int x=-1;
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        stack[top]=x;
        top--;
    }
    return x;
}

void display()
{
    int i,top;
//    if(top==-1)        check whither the stack is empty or not....
//    {
//     printf("stack is empty\n");
//	}
//	else{
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
//    }
    printf("/n");
}

int main ()
{
    while(1)
    {
        printf("ENTER YOUR CHOICE:\n1.push()\n1.pop()\n3.display()\n");
        int ch;
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
             push();
             break;
            }
            case 2:
            {
             pop();
             break;
            }
            case 3:
            {
             display();
             break;
            }
            default:
            {
             printf("INVALID CHOICE!!\n");
             break;    
            }
        }
        
    }
    return 0;
}
