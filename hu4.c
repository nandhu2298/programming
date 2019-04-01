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
              
              
              c++;
              a[j]='$';
          }
          
      }   
          
          
      }
  
 
  
  if(c==0)
  {
  if(a[i]!='$')
  printf("%d ",a[i]);
} a[i]='$';
  
}



}
