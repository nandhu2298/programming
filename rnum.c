#include <stdio.h>
int main()
{
int N,i,r,s=0;
scanf("%d",&N);
while(N)
{
    
    r=N%10;
    s=(s*10)+r;
    N=N/10;
    
    
}
printf("%d",s);  
return 0;
}
