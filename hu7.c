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
     
 
      if(i%2==0&&a[i]%2!=0)
      {
          
          printf("%d ",a[i]);
      }
         
        else if(i%2!=0&&a[i]%2==0)
        {
              printf("%d ",a[i]); 
            
        }
         
         
               
           
   }
   
    return 0;
}
