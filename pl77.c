#include <stdio.h>
void main() 
{
	int N,a[30],i,c=1,m=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=1;i<N;i++)
	{
		  if(a[i-1]<a[i])
		    {
		        c++;
		    }
		    else
		    {
		        if(m<c)
		        {
		            m=c;
		        }
		        c=1;
		    }
		}
		if(c>m)
			     printf("%d",c);
		else
	            printf("%d",m);
	}
