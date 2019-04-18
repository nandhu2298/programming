

#include <stdio.h>

int main()
{
  
  int N,i,j,k=0;
  scanf("%d",&N);
  if(N<=2)
  printf("0");
  for(i=2;i<N;i++)
  {
      
      k=0;
      for(j=2;j<=i/2;j++)
      {
          
          
          if(i%j==0)
           k=1;
          
          
          
          
          
          
          
      }
      
      
      
      
      
      if(k==0)
      printf("%d ",i);
      
      
      
      
  }
   
   
   
   
   
   
}
