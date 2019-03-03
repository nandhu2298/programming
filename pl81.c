#include <stdio.h>

int main()
{
  int N,i,a[100],s,m=0,j;
  scanf("%d",&N);
  
  for(i=0;i<N;i++)
  {
      scanf("%d",&a[i]);
  }

  for(i=0;i<=N;i++)
  {
   for(j=i;j<N;j++)
		{
			s=a[i]&a[j];
			if(m<s)
			{
				m=s;
			}
		}
		
}

  printf("%d",m);
  
    return 0;
}
