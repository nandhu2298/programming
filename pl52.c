#include <stdio.h>

int main()
{
   
   
 int N,K;
 scanf("%d",&N);
 scanf("%d",&K);
 int a[N],p,m,i,j;
 for(i=0;i<N;i++)
 {
     scanf("%d",&a[i]);
 }
      
 
   for(i=0;i<N+1-K;i++)
   {
  m=a[0];
   for(j=1;j<N;j++)
   {
    
       if(m<a[j])
       {
           
           m=a[j];
           p=j;
           
       }
        
   
   }
   
  a[p]=0;
   }
   
   
   
   
   
   
   
   
   
   
   printf("%d",m);
   
   
   
   
   
   
    return 0;
}
