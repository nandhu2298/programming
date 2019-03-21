#include <stdio.h>

int main()
{
  
  
  int N,a[100],i,j,c,l=0;
  scanf("%d",&N);
  for(i=0;i<N;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<N;i++)
  {
  
  for(j=i+1;j<N;j++)
  {
      
   if(a[i]<a[j])
   {
       c=a[i];
       a[i]=a[j];
       a[j]=c;
       
       
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
   for(i=0;i<N;i++)
  {
 printf("%d",a[i]);
  }}
  
  
    return 0;
}
