#include <stdio.h>

int main()
{
   int N,a[10000],b[10000],s=0,i,j,k=0;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=N-1;i>=0;i--)
   {
       
       
  
    s=s+a[i];
    
    b[k]=s;
    
k++;

}

for(i=N-1;i>=0;i--)
   {
      printf("%d ",b[i]);
   }

}
