
#include <stdio.h>

int main()
{
   int N,a[100],i,j,m;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   
   


    for(i=0;i<N;i++)
   {
       
   for(j=i+1;j<N;j++)
   {
      
             
         if(a[i]>a[j])
         {
             
         m=a[i];
         a[i]=a[j];
         a[j]=m;
         
    
   }
   
  
       
   }
     
     
    
       
   }
   
   
   
   
   for(i=N-1;i>=0;i--)
   {
    printf("%d ",i+1);
   }
   
   
   
   
   
   
    return 0;
}
