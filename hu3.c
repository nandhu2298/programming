#include <stdio.h>

int main()
{
  
  
  int N,a[100],i,c=0,b[100],k=0,l=0,j;
  scanf("%d",&N);
  for(i=0;i<N;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<N;i++)
  {
  
  
  if(i==a[i])
  {
      c++;
      
    //  printf("%d ",a[i]);
      
      b[k]=a[i];
      k++;
      
      
  }
  
  
  
  
  }
  
  
  
  for(i=0;i<k;i++)
  {
  
  
 for(j=i+1;j<k;j++)
  {
      
   if(b[i]>b[j])
   {
       c=b[i];
       b[i]=b[j];
       b[j]=c;
       
       
   }
      
  }
  }
  
   for(i=0;i<N;i++)
  {
      if(a[i]==0)
      {
          l++;
      }
     
  }
  if(l==N)
  {
      printf("0");
  }
  else
  {
   for(i=0;i<k;i++)
  {
 printf("%d ",b[i]);
  }}
if(c==0)
printf("-1");
  
    return 0;
}
