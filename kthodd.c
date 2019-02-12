#include <stdio.h>

int main()
{
   int N,K,i,c=0;
   scanf("%d %d",&N,&K);
   int a[N];
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
       
   }
   
       
   for(i=0;i<N;i++)
   {
       
     
       
  if(a[i]%2!=0)
  {
      
      c++;
      
      if(c==K)
       printf("%d",a[i]);
      
      
  }
   
   
   
   }
    return 0;
}
