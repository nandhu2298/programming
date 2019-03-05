#include <stdio.h>

int main()
{
   int N,a[100000],i,m;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   
      for(i=0;i<N;i++)
   {
     if(a[i]>a[i+1])
        m=a[i];
    
       
     
   }
    printf("%d ",m);
    return 0;
}
