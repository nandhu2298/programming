#include <stdio.h>

int main(void) {


int N,i,c=0;
scanf("%d",&N);
if(N>=1&&N<=100000)
{
for(i=N-1;i>1;i--)
{
    
    if(N%i==0)
    {
        
        
     c++;
        
        
    }
    
}

if(c!=0)
printf("yes");
else
printf("no");


}
return 0;
}
