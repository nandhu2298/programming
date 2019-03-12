#include <stdio.h>

int main()
{
   int N,a[100],s=0,i;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=1;i<N;i++)
   {
   s=s+a[i];
   
   }
   printf("%d",s);
}
