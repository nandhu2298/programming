#include <stdio.h>

int main()
{
int N,K,a[100],i;
scanf("%d %d",&N,&K);
for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}
  
 for(i=0;i<N-K;i++)
 {
     
     printf("%d ",a[i]);
 }


  
   return 0;
}
