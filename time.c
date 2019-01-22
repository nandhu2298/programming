#include <stdio.h>
int main()
{
   int n,i,h,m;
   scanf("%d",&n);
   
   if(n>=60)
   {
       
       h=n/60;
       
       
       m=n-(h*60);
       
       
       printf("%d %d",h,m);
       
   }
else
{
    
    printf("0 %d",n);
    
}
}
