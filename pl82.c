#include <stdio.h>

int main()
{
  int N,i,a[100],s;
  scanf("%d",&N);
  
  for(i=0;i<N;i++)
  {
      scanf("%d",&a[i]);
  }
 s=a[0];
  for(i=1;i<N;i++)
  {
   
   s=s&a[i];
  }

  printf("%d",s);
  
    return 0;
}
