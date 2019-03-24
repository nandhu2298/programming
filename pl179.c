
#include <stdio.h>
void main()
{
   int a,b,xor,bin=0,r,power=1,c=0;
   scanf("%d %d",&a,&b);
   xor=a^b;
   while(xor>0)
   {
       r=xor%2;
       bin=bin+r*power;
      xor=xor/2;
       power=power*10;
   }
   while(bin>0)
   {
       r=bin%10;
       if(r==1)
       {
           c++;
       }
       bin=bin/10;
   }
   printf("%d",c);
}
