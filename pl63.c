#include <stdio.h>

int main()
{
int N;
scanf("%d",&N);
int A[N],B[N],i,j,c=0;
for(i=0;i<N;i++)
{
    scanf("%d",&A[i]);
}

for(i=0;i<N;i++)
{
    scanf("%d",&B[i]);
}
 
 
 for(i=0;i<N;i++)
 {
     for(j=0;j<N;j++)
 { 
    if(A[i]==B[j])
     {
     
     break;
         
     }   
 }
 
 if(c!=1)
 printf("%d ",A[i]);
 }
 
 
 
 
 
 
 
 
  
}
