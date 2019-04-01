#include <stdio.h>

int main()
{
    int N,a[100],i,j,k;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   
   
   for(i=0;i<N;i++)
   {
     
 
   for(j=i+1;j<N;j++)
   {
    
    
    if(a[i]+a[j]==0)
    
    printf("%d %d",a[i],a[j]);
    
    
    
   }
         
               
           
   }
   
    return 0;
}
