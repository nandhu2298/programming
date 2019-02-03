#include <stdio.h>

void main ()
{


int N,L,R,i,c=0;
scanf("%d",&N);
scanf("%d %d",&L,&R);
for(i=L+1;i<R;i++)
{
    
   if(i==N)
   {
       
       
       
       c++;
       break;
   }
}

if(c!=0)
printf("yes");
else
printf("no");











}
