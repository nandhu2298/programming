

#include <stdio.h>

int main()
{

int N,K,r,c=0;
scanf("%d %d",&N,&K);


while(N)

{
    
    
    r=N%10;
    
    if(r==K)
    {
        c++;
    }
    N=N/10;
    
    
}
printf("%d",c);
}
