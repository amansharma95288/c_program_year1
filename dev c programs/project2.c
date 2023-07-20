// first project ::stopwatch and timer...!!

#include<stdio.h>
#include<conio.h>
#include<windows.h>              //used to implement the sleep operator...

#define TRUE 1
int main ()
{
    int h=0,m=0,s=0,ms=0;        //here h=hour,m=min,s=sec,ms=milisecond...
    char ch;                     //we will use switch case to make our program more dynamic...
    printf("enter your choice\n press'a'for stopwatch\n press'b' for timer");
    scanf("%c",&ch);
    switch (ch)
    {
     case 'a':
        while (TRUE)             //we can also write 1 in place of true...
        {
          printf("     \r%2d:%2d:%2d:%2d",h,m,s,ms);  //here r is used to update the value...
          ms++;
          sleep(10);                  //it is approx 1 mlisecond..
          if(ms==100)
          {
              s++;
              ms=0;
          }
          if(s==59)
          {
              m++;
              s=0;
              ms=0;
          }
          if(m==59)
          {
              h++;
              m=0;
              s=0;
              ms=0;
          }
          if(h==24)
          {
              h=0;
              m=0;
              s=0;
              ms=0;
          }
        }
        break;
        case 'b':
        printf("enter the time in hh:mm:ss(any sapce):\n" );
        scanf("%d%d%d",&h,&m,&s);
        while(1)
        {
            printf("     \r%d:%d:%d",h,m,s);
            sleep(1000);             //approx 1sec
            if(s!=0)
            {
                s--;
            }
            if(s==0 && m!=0)
            {
                s=59;
                m--;
            }
            if(s==0 && m==0 && h!=0)
            {
                s=59;
                m=59;
                h--;
            }
            if(s==0 && m==0 && h==0)
            {
                exit(0);
            }
        }

    }
    return 0;
}
