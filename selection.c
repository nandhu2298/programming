#include <stdio.h>

int main()
{
    int N,a[100],m,t,i,j,l;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       
     scanf("%d",&a[i]);
       
   }
   for(i=0;i<N;i++)
   {
      
      m=a[i]; 
      for(j=i+1;j<N;j++)
      {
       
       
      if(m>a[j])
      {
          m=a[j];
          l=m;
      }
      
      
      
      }
      
    if(m<a[i])
      {
         t=a[i];
         a[i]=a[l];
         a[l]=t;
          
          
      }
   
   
   
   
   }
   
   
   
   
    for(i=0;i<N;i++)
   {
     
    printf("%d ",a[i]); 
   }
   
   
   
   
   
   
   
   
   
}
