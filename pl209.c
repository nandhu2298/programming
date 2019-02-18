#include <stdio.h>

int main(void) {

int N,s=1;
scanf("%d",&N);
int a[N][N],i,j,t=1;
for(i=0;i<N;i++)
{
    
    
    for(j=0;j<N;j++)
    {
        
        
        
        scanf("%d",&a[i][j]);
        
    }
}

for(i=0;i<N;i++)
{
    
    
    for(j=0;j<N;j++)
    {
      if(i==j)
      {
        s=s*a[j][i];  
          
      }



}}

for(i=0;i<N;i++)
{
    
    
    for(j=N-1-i;j>=0;j--)
    {
      
        t=t*a[i][j];  
          break;
      



}}


printf("%d",s+t);




  return 0;
}
