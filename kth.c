#include <stdio.h>

int main()
{
int N,K,i;
scanf("%d %d",&N,&K);
int a[N];
for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}
    
 printf("%d",a[K-1]);
    
    
    return 0;
}
