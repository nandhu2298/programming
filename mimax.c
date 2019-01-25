#include <stdio.h>

int main()
{
  int i,N,m,mi;
  scanf("%d",&N);
  int a[N];
  if(N<10000)
  {
      
  for(i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
     }
    m=a[0];
    
     for(i=0;i<N;i++)
  {
   if(m>a[i])
    {
       m=a[i];
    }
  }
  printf("%d ",m);
  
  
  mi=a[0];
   for(i=0;i<N;i++)
  {
   if(mi<a[i])
    {
       mi=a[i];
    }
  }
  
   printf("%d",mi);
  }
    return 0;
}
