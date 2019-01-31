#include <stdio.h>

int main()
{
  int n,cn=0;
  scanf("%d",&n);
  while(n>0)
  {
  
   n=n/10;
      
        
   cn++;  
      
  }
printf("%d",cn);
    return 0;
}
