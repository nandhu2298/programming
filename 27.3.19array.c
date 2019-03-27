#include <stdio.h>

int main()
{
   int N,i,a[100],c=0,b[10],l=0,j,k=0;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   
   for(i=0;i<N;i++)
   {
       
       if(a[i]%2==0)
       {
           
           
           
           for(j=i;j<N;j++)
           {
              if(a[j]%2==0)
       {
           
               
         //printf("%d \n",a[i]);
        
   // c++;
           b[c]=a[j];
           c++;
           }
           else
            break;
            
             //b[c]=a[i];  
       }
         for(i=0;i<c;i++)
         {
             
         }
         
         i=j+1; 
         
         
       }
          
       
   }
   
   for(i=0;i<c;i++)
   {
       
           
       printf("%d ",b[i]);
   }
   
   
}
