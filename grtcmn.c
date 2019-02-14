#include <stdio.h>

int main()
{
int N,K,i,m;
scanf("%d %d",&N,&K);
if(N<=100000&&K<=100000)
{
    for(i=1;i<=N&&i<= K;i++)
    {
        
        if(N%i==0&&K%i==0)
        {
            
            m=i;
        
            
            
        }
        
        
    }
    
}
  printf("%d",m);  

}
