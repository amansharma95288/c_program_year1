//write a c program to demostrate logical operators ?
#include<stdio.h>
void main()
{
    int a=10,b=20,c=30;
    printf("(a>b)&&(c>b)=%d",(a>b)&&(c>b));
     printf("(a>b)!!(c>b)=%d",(a>b)!!(c>b));
      printf("!((a>b)!!(c>b))=%d",(a>b)!!(c>b));

}