#include <stdio.h>

int main()
{
    int N,s=0,r;
    scanf("%d",&N);
    
    while(N)
    {
        
        r=N%10;
       
        if(r%2!=0)
        {
            
            s=s+r;
        }
        
        N=N/10;
        
    }
    
    if(s%2==0)
    printf("E");
    else
    printf("O");
    return 0;
}
