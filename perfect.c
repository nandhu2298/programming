#include <stdio.h>

int main()
{
int N,M,a,i,c=0;
scanf("%d %d",&N,&M);
a=N*M;


for(i=1;i<=a;i++)
{
    
    if(i*i==a)
    {
        
        
        c++;
        
        printf("yes");
        break;
    }
    
    
   
}
  
  if(c==0)
  printf("no");
    return 0;
}
