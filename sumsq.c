#include <stdio.h>

int main()
{
   
   int N,r,s=0;
   
   scanf("%d",&N);
   if(N>=1&&N<=1000000000000000000)
   {
   while(N)
   {
     r=N%10;
     s=s+(r*r);
     N=N/10;
       
       
   }
   printf("%d",s);
   }
   return 0;
}
