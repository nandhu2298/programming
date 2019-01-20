#include <stdio.h>

int main()
{
   
   int n,r,s=0,t,c=0,p,i,a;
   scanf("%d",&n);
   t=n;
   a=n;
   
   while(n>0)
   {
       
     
       n=n/10;
       c++;
}
 
 while(a>0)
 {
     
     
     p=1;
     r=a%10;
     
     for(i=1;i<=c;i++)
     {
         p=p*r;
         
     }
     s=s+p;
     a=a/10;
     
 }
 if(s==t)
 {
     printf("yes");
 }
 else{
     
     
     printf("no");
 }
   
  }
