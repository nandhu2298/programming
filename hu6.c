#include <stdio.h>

int main()
{
  int N,a[100],i,j,c=0;
  scanf("%d",&N);
  for(i=0;i<N;i++)
  {
      scanf("%d",&a[i]);
  }
   for(i=0;i<N;i++)
  {
      c=0;
     
      for(j=i+1;j<N;j++)
      {
        if(a[i]!='$'&&a[j]!='$')
      {  
          if(a[i]==a[j])
          {
              
                printf("%d ",a[i]);
              c++;
             
          }
          
      }   
          
          
      }
  
 
  
  if(c==1)
  {
  break;
} 
  
}
if(c==0)
printf("unique");
}
