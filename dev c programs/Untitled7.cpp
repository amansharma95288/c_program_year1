#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
	    int N,m,sum=0;
	    scanf ("%d\n",&N);
	    while(N!=0)
	    {
	        m=N%10;
	        N=N/10;
	        sum=sum+m;
	    }
	        printf("%d\n",sum);
	}
	return 0;
}
