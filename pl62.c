#include <stdio.h>

int main()
{
  int N,i,r;
    scanf("%d",&N);
  for(i=1;i<=N;i++)
  {
      r=N%i;
      
      if((N/i)%2!=0&&r==0)
      {
          printf("%d",i);
          break;
      }
      
  }
   
  
}
