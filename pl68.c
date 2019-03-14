#include <stdio.h>
 
int main()
{
    
    
int N,a[1000],i,j,c=1,m=0;
scanf("%d",&N);
for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}
     
    
    for(i=0;i<N;i++)
{
    c=1;
 for(j=i+1;j<N;j++)
{
        if(a[i]==a[j])
    {
        
        c++;
        
    }

}
if(c>m)
m=c;

}
    
 printf("%d",m);
    
    
    
}
