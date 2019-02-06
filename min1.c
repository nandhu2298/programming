#include <stdio.h>

int main()
{
  int n=10,a[n],m,i;
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
    
    m=a[0];
     for(i=1;i<n;i++)
  {
      
      if(m>a[i])
      m=a[i];
      
      
  }
  printf("%d",m);
      
      
      
    
    return 0;
}
