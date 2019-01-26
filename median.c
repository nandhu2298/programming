
#include <stdio.h>

int main() {
    int i,j,N,c;
    scanf("%d",&N);
    
    if(N<1000)
    {
  
int a[N];
  for(i=0;i<N;i++)
  {
      scanf("%d",&a[i]);
  }
  
  
  for(i=0;i<N;i++)
  {
  
  for(j=i+1;j<N;j++)
  {
  if(a[i]>a[j])
  {
 
  c=a[i];
  a[i]=a[j];
  a[j]=c;
  
  }
  
  
  }}
    printf("%d ",a[N/2]);
  
  
  
  
  
}
    return 0;
}
