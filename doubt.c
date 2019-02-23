#include <stdio.h>

int main()
{

int N,K,i,j,m;
scanf("%d",&N);
scanf("%d",&K);
int a[N+K];
for(i=0;i<N;i++)
{
     scanf("%d",&a[i]);
    
    
}
 
 
 for(i=N;i<N+K;i++)
{
  
 for(j=0;j<N+K;j++)
{
  scanf("%d",&a[i]);
  
  m=a[0];
  
  if(m<a[j])
   m=a[j];
  
 
 
 
 
}

printf("%d",m);

}



}
