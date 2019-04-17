

#include <stdio.h>

int main()
{
    int N,s=0,r;
    scanf("%d",&N);
    while(N)
    {
        
        
        r=N%10;
        s=s+r*r;
        N=N/10;
        
    }
    
    
    printf("%d",s);
    
    
    
    
    
    
    
}
