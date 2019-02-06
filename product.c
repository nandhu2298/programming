#include <stdio.h>

int main()
{
int N,s=1,r;
scanf("%d",&N);
if(N<100000000000)
{

while(N)
{
    
    
    r=N%10;
    s=s*r;
    N=N/10;
    
    
    
}}
    printf("%d",s);
    
    return 0;
}
