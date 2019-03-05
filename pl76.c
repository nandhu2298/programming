#include <stdio.h>
#include<math.h>

int main()
{
   int N,a[100000],i,d=0,c=0;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   
      for(i=0;i<N;i++)
   {
       if(a[i]%2==0)
       c++;

    if(a[i]%2!=0)
       d++;

     
   }

   if(c==N-1)
   {
       
            for(i=0;i<N;i++)
   {
     
       if(a[i]%2!=0)
       printf("%d",a[i]);
       
   }
   }
   
   
    if(d==N-1)
   {
       
            for(i=0;i<N;i++)
   {
     
       if(a[i]%2==0)
       printf("%d",a[i]);
       
   }}
   
  //  printf("%d",m);
    return 0;
}
