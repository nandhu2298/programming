#include <stdio.h>
int main()
{
   
int a,b,i,f=0,j;
scanf("%d %d",&a,&b);

for(j=a+1;j<b;j++)
{
    
    
    f=0;


for(i=2;i<=j/2;i++)
{
    if(j%i==0)
    {
        f=1;
        
        break;
    }
}

if(f==0)
{
    
    printf("%d ",j);
}

  }
}
