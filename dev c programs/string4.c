//program using strcmp library function ...?
#include<stdio.h>
#include<string.h>
int main ()
{
	int temp;
	char s1[20]="Aman";
	char s2[20]="Aman";
	temp=strcmp(s1,s2);
	if(temp==0)
	printf("same\n");
	else
	printf("not same\n");
	printf("%d",temp);
	return 0;
}
// without using strcmp function..
//    int flag=0;
//    int i;
//    char s1[20];
//      char s2[20];
//       puts(s1);
//       puts(s2);
//    for(i=0;s1[i]!='\0'||s2[i]!='\0';i++ )
//    {
//    	if (s1[i]!=s2[i])
//    	{
//    		flag=1;
//    		break;
//		}
//		if (flag == 1)
//		{
//			not same;
//		}
//		else
//		same;
//	}
