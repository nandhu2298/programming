#include <stdio.h>

int main()
{
 int a=1,b=1,c,i,n;
 scanf("%d",&n);
   printf("%d %d ",a,b);
 for(i=2;i<n;i++)
 {
    c=a+b; 
    a=b;
    b=c;
     
       printf("%d ",c);
 }
 
    return 0;
}

