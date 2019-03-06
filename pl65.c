#include <stdio.h>

int main()
{
   int N,a[10000],b[10000],i,j,m=0,c;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }

      for(i=0;i<N;i++)
   {
       
if(a[i]<N)

   {
       
      b[m]=a[i];
      m++;
   }
       
     
   }
 
   
      for(i=0;i<m;i++)
   {
       
       for(j=i+1;j<m;j++)
       {
           
        if(b[i]>b[j])
        {
            
            c=b[i];
            b[i]=b[j];
            b[j]=c;
            
            
        }
       }
       }
   
     for(i=0;i<m;i++)
   {
   
   
   printf("%d ",b[i]);
   }

    return 0;
}
