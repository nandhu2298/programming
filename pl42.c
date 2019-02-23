#include <stdio.h>

int main()
{
 int N;
 scanf("%d",&N);
 int a[N],i,c=1;
 
 for(i=0;i<N;i++)
 {
     scanf("%d",&a[i]);
 }
 
  for(i=0;i<N;i++)
 {
  
  if(a[i]<a[i+1])
  {
      c++;
  }
  
  
 }
 
 
 if(c==N)
 printf("yes");
 else
 printf("no");
 
 
 
 
 
 
 
 
}

