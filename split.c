#include <stdio.h>



int main(void) 

{

	int N,r,s=0;

scanf("%d",&N);

	while(N!=0)

	{

		r=N%10;

		s=(s*10)+r;

		N=N/10;

	}

	N=s;

	while(N!=0)

	{
	    
	    
	    	r=N%10;

	
		printf("%d ",r);

		N=N/10;



	}

	return 0;



}
