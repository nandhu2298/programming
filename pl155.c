#include <stdio.h>

int main() 
{
	int n,k,a[100],i,t,j;
  scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		}
	}
	for(i=0;i<k;i++)
	printf("%d ",a[i]);

	for(i=k;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[i]<a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		}
	}
	for(i=k;i<n;i++)
	printf("%d ",a[i]);
 
	
}
