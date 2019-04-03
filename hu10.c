#include <stdio.h>

int main()
{
    int N,M,A[10000],B[10000],i,j,c=0;
    scanf("%d %d",&N,&M);
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
        
    }
     for(i=0;i<M;i++)
    {
        scanf("%d",&B[i]);
        
    }
    
    for(i=0;i<N;i++)
    {
     
    for(j=0;j<M;j++)
    {
    
    if(A[i]==B[j])
    c++;
  
    }}
    if(c==M)
    printf("YES");
    else
     printf("NO");

         
    
    return 0;
}
