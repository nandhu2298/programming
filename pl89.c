#include <stdio.h>

int main()
{
  int N,K,i,f=1,c,d=1;
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


  printf("%d",(f/(d)));
  
    return 0;
}
