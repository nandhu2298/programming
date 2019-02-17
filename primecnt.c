#include <stdio.h>
int main()
{
   
int l,r,i,f=0,j,c;
scanf("%d %d",&l,&r);

for(j=l;j<=r;j++)
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
    c++;
  
}

  }
  
  
  
    printf("%d ",c);
}
