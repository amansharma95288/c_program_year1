#include <stdio.h>

int main(void) {
	// your code goes here
	int N,cout=0;
	int i,j;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
	    for(j=0;j<N;j++)
	    {
	        if(i+j==N)
	        {
	           cout++;
	         }
	    }
	}
	printf("%d",cout);
	return 0;
}
