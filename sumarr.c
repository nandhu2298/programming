#include <stdio.h>
int main()
{
 int N,i,s=0;
  scanf("%d",&N);
  
  int a[N];
  
  for(i=0;i<N;i++)
{
  scanf("%d",&a[i]);   
}

for(i=0;i<N;i++)
{
  s=s+a[i];   
}
  printf("%d",s);
    return 0;
}
