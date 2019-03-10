#include <stdio.h>

int main()
{
   long N,c=0,t,i,p=1,a,r,b;
   scanf("%ld",&N);
   
   
   t=N;
   while(t)
   {
       c++;
       t=t/10;
    
       
   }
   
   
  
       
       for(i=1;i<c;i++)
       {
           
           p=p*10;
       }
       
       a=N/p;
       
       r=N%10;
  b=a+r;
  printf("%ld",b);
   
    return 0;
}
