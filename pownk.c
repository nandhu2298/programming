#include <stdio.h>

int main()
{
   int N,K,i,p=1;
   scanf("%d %d",&N,&K);

   for(i=1;i<=K;i++)
   {
       
    p=p*N;
   }
   printf("%d",p);
  
   
    return 0;
}
