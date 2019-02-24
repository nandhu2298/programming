#include <stdio.h>
main()
{
    int P,A,i,j,p,a,c=0;
	scanf("%d %d",&P,&A);
	for(i=1;i<=P;i++)
	{
	    for(j=1;j<=A;j++)
	{
	    p=2*(i+j);
	    a=i*j;
	    if(p==P && a==A)
	    {
	        
	        c++;
	       
	        break;
	    }
	}

	}
	if(c==0)
	{
	    printf("no");
	}else
	 printf("yes");
}
