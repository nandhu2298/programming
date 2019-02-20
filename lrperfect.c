#include <stdio.h>

int main()
{
  int l,r,i,j,c=0;
  scanf("%d %d",&l,&r);
  if(l<=10000&&r<=100000)
  {
  for(i=l;i<=r;i++)
  {
      
      for(j=1;j<=r;j++)
      {
          if(j*j==i)
          {
              c++;
              break;
              
          }
          
      }
      
      
  }
  
  
  printf("%d",c);
  
  }
    return 0;
}
