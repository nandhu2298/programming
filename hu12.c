#include <stdio.h>

int main()
{
    int N,K,A[10000],i,m,j,p;
    scanf("%d %d",&N,&K);
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
        
    }
   
   for(j=0;j<K;j++)
   {
     m=0;
   for(i=0;i<N;i++)
   {
     if(m<A[i])  
  
      m=A[i]; 
      p=i;
   } A[p]=0;
   }
   
  
   printf("%d",m);
    return 0;
}
