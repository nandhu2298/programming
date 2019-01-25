#include <stdio.h>

int main()
{
  int i=0,N;
  scanf("%d",&N);

  if(N<100000000000)
  {
      
  while(N)
  {
      
    i++;  
    N=N/10;
      
  }
  
   printf("%d",i);
  }
    return 0;
}
