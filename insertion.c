#include <stdio.h>
int main()
{
  int n,i,a[10],t,c=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
    for(i=0;i+1<n;i++)
  {
      
  while(a[i]>a[i+1])
  {
      
      t=a[i];
      a[i]=a[i+1];
      a[i+1]=t;
      
  i=0;
  }
  
  
  
 
  
  }
  
    for(i=0;i<n;i++)
  {
   printf("%d ",a[i]);   
  }
  

    return 0;
}
