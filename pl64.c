#include <stdio.h>

int main()
{
   int N,K,a[100000],b[100000],i,j,m=0,c;
   scanf("%d %d",&N,&K);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   
      for(i=0;i<N;i++)
   {
       
if(a[i]<K)

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
