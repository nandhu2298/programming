#include <stdio.h>

int main()
{
   int N,i;
   scanf("%d",&N);
   
   
   for(i=N;i>=0;i++)
   {
       
       
       if(i%10==0)
       {
           
           
           printf("%d",i);
           break;
           
       }
       
       
   }
   
   return 0;
}
