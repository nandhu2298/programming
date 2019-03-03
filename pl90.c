#include <stdio.h>

int main()
{
  int N,K,i,f=1,c,d=1,e=1;
  scanf("%d %d",&N,&K);
  c=N-K;
  for(i=1;i<=N;i++)
  {
      f=f*i;
  }
    for(i=1;i<=c;i++)
  {
      d=d*i;
  }
      for(i=1;i<=K;i++)
  {
      e=e*i;
  }
  
  

  printf("%d",(f/(d*e)));
  
    return 0;
}
