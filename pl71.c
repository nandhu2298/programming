#include <stdio.h>

int main()
{
   int N,a[100000],i;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   
      for(i=0;i<N-1;i++)
   {
     if(a[i]<a[i+1])
      printf("%d ",a[i+1]);
      else 
        printf("%d ",a[i]);
     
   }
    return 0;
}
