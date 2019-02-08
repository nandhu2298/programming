#include<stdio.h>

int main()
{
int N,i,K;
scanf("%d %d",&N,&K);
int a[N],c=0;
for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;a[i]!='\0';i++)

{
    
    if(a[i]==K)
    {
        
        
     c++;
        break;
    }
    
    
}

if(c!=0)
printf("yes");
else
printf("no");


    return 0;
}
