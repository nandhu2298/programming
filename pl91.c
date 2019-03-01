#include <stdio.h>

int main()
{
   int N,r,base=1,bin=0;
   scanf("%d",&N);
   
   while(N)
   {
       
       r=N%2;
       N=N/2;
       bin=bin+(r*base);
      base=base*10;
      
   }
   printf("%d",bin);
    return 0;
}
