#include <stdio.h>

int main()
{
   int n,i;
   scanf("%d",&n);
   if(n<=10000)
   {
   
   
   for(i=n;i>=0;i++)
   {
       
       
       if(i%10==0)
       {
           
           
           printf("%d",i);
           break;
           
       }
       
       
   }
   }
   return 0;
}
