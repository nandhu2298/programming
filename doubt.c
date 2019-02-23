#include <stdio.h>

int main()
{

int N,K,i,j,m,c=0;
scanf("%d",&N);
scanf("%d",&K);
int a[N+K];
for(i=0;i<N;i++)
{
     scanf("%d",&a[i]);
    
    
}
 
 
 for(i=N;i<N+K;i++)
{
  
    scanf("%d",&a[i]);
   c++;
      m=a[0];
   for(j=1;j<N+c;j++)
{
  

  

  

  
  if(m<a[j])
   m=a[j];
  
 
 
 
 
}

printf("%d ",m);

}



}
