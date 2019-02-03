#include <stdio.h>

void main ()
{


int N,i,c=0;
scanf("%d",&N);

for(i=2;i<=N/2;i++)
{
    
    if(N%i==0)
    



{
    c++;
    
    
    break;
    
}
    
    
    
  
}


if(c!=0)
printf("yes");
else
printf("no");









}
