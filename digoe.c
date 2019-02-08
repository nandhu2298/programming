#include <stdio.h>

int main()
{
  int N,r=0,k=0,a[100000],i;
  scanf("%d",&N);
  
  if(N<100000)
  {
      while(N)
      {
          
          r=N%10;
          if(r%2!=0)
          {
              
             a[k]=r;
              k++;
              
          }
          
         N=N/10; 
          
          
          
      }
      
      
  }
  
  
  for(i=k-1;i>=0;i--)
  {
      
      printf("%d ",a[i]);
  }
  
    return 0;
}
