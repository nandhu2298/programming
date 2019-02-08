#include<stdio.h>

int main()
{
int N,s,r;
scanf("%d",&N);
while(N)
{
    
    r=N%10;
    s=s+r;
    N=  N/10;
    
    
}
printf("%d",s);
    return 0;
}
