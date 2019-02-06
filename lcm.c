#include <stdio.h>

int main()
{
int N,M,i,gcd,lcm;
scanf("%d %d",&N,&M);

for(i=1;i<=N&&i<=M;i++)
{
    
    
    
    
    if(N%i==0&&M%i==0)
    gcd=i;
    
    
    
}


lcm=(N*M)/gcd;

    printf("%d",lcm);
    
    return 0;
}
