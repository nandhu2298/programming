#include <stdio.h>

int main()
{
   
   int N,K;
   scanf("%d",&N);
   scanf("%d",&K);
   int a[N],i,c=0;
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }



 for(i=0;i<N;i++)
   {

      if(a[i]==K)
      {
          
          
          
          c++;
          
          
          
        
      }
}

if(c!=0)
printf("Yes");
else
printf("No");
}
