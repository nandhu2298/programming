#include <stdio.h>

int main() {
  
  
int N,i,c=1,d=0;
scanf("%d",&N);
for(i=1;i<=N;i++)
{
    c=c*2;
    if(c==N)
    {
        printf("yes");
        break;
    }
    
    else 
    d++;
}
if(d==N)
   printf("no");
    return 0;
}
