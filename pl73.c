#include <stdio.h>

int main()
{
   int N,a[100000],i,K;
   scanf("%d %d",&N,&K);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   
      for(i=0;i<N;i++)
   {
    if(a[i]==K)
     {
         printf("%d ",i+1);
         break;
         
     }
       
     
   }
    
    return 0;
}
