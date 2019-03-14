#include <stdio.h>

int main()
{
   int N,a[100],s=0,i;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<N-1;i++)
   {
   s=s+a[i]+a[i+1];
   
   }
   printf("%d ",s);
}
