#include <stdio.h>

int main()
{
   
   int N,K;
   scanf("%d %d",&N,&K);
   int a[N],i,l,j;
   if((N>=1&&N<=100000)&&(K>=1&&K<=100000))
   {
   for(i=0;i<N;i++)
   {
       
       scanf("%d",&a[i]);
   }
   
      for(j=1;j<=K;j++)
 {
    l=a[N-1];
     for(i=N-1;i>0;i--)
   {
     
     a[i]=a[i-1];
     }
  
   a[0]=l;
   }
  
    for(i=0;i<N;i++)
   {
       
       printf("%d ",a[i]);
   }
   
   }
   return 0;
}
