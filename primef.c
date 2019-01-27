#include <stdio.h>
int main()
{
int N,i,j,f=0;
scanf("%d",&N);

if(N>=2&&N<=100000)
{
for(i=2;i<=N;i++)
{
  if(N%i==0)
    {
        
        
        for(j=2;j<=i/2;j++)
        {
            
            
            if(i%j==0)
            {
                
                f=1;
                break;
                
            }
            
            
            
        }
     
     
     
     
     if(f==0)
     
     
        
          printf("%d  ",i);
    }
}}
return 0;


}   



