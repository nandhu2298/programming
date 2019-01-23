#include <stdio.h>
int main()
{
int n,i,fa=1;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fa=fa*i;
}
printf("%d ",fa);  
return 0;
}
