#include <stdio.h>

int main()
{
   int N,X;
   
   scanf("%d %d",&N,&X);
   int a[N],i,j,s=0;
   for(i=0;i<N;i++)
   {
       
       scanf("%d",&a[i]);
    
   }
   
   for(i=0;i<N;i++)
   {
       for(j=i+1;j<N;j++)
       {
         if(a[i]+a[j]==X)
         {
             s++;
             break;
         }
           
           
       }
       
          
      }
      if(s==1)
   printf("yes");
   else
   printf("no");
    return 0;
}
