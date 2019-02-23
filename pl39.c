#include <stdio.h>

int main()
{
   int N,c=0,i;
   scanf("%d",&N);
   for(i=1;i<=N;i++)
   {
       if(i*i==N)
       {
           c++;
           break;
       }
   }
   if(c!=0)
   printf("yes");
   else
   printf("no");

    return 0;
}
