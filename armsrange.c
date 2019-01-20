#include <stdio.h>

int main()
{
   
   int d,b,r,s=0,t,c=0,p,i,j,a;
   scanf("%d %d",&d,&b);

   for(i=d+1;i<b;i++)
   {
       
       
   s=0;
   c=0;
   t=i;
   a=i;
   
   while(t>0)
   {
       
     
       t=t/10;
       c++;
}
 
 while(a>0)
 {
     
     
     p=1;
     r=a%10;
     
     for(j=1;j<=c;j++)
     {
         p=p*r;
         
     }
     s=s+p;
     a=a/10;
     
 }
 if(s==i)
 {
     printf("%d ",s);
 }}
 
  }
