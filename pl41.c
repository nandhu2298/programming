#include<stdio.h>
void main()
{
    int a,b,i,p=1,c=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
       p=p*b;
        if(p==a)
        {
            c++;
            break;
        }
        
     }
        if(c==0)
        printf("no");
        else printf("yes");
        
    
}
