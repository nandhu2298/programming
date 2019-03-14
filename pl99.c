#include <stdio.h>
 int main()
{
   
long N,r,bin=0,base=1;
 scanf("%ld",&N);
 while(N)
 {
     r=N%10;
     N=N/10;
     bin=bin+(r*base);
     base=base*2;
    
 }
 printf("%lo",bin);
}

