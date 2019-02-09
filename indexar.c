#include <stdio.h>

int main()
{
int N,i,k=0;
scanf("%d",&N);

int a[N],c[N];
for(i=0;i<N;i++)
{
    
    
    scanf("%d",&a[i]);
}

for(i=1;i<=N;i++)
{
    
   c[k]=i;
   k++;
    
    
}



for(i=0;i<N;i++)
{
 
if(a[i]!=c[i])
{
    printf("%d",i);
}

}

return 0;
}
