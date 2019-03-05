#include <stdio.h>
#include<math.h>

int main()
{
   int N,a[100000],i,m=0,j,c;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   
      for(i=0;i<N;i++)
   {
       
      for(j=i+1;j<N;j++)
   {
          
    c=abs(a[i]-a[j]);
  
if(m<c)
 m=c;
       
   }
   
       
     
   }
    printf("%d",m);
    return 0;
}
