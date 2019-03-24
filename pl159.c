
#include <stdio.h>

int main()
{
    int a,b,c,d=0,r,bin=0,base=1;
    scanf("%d %d",&a,&b);
    c=a*b;
    while(c)
    {
        
        r=c%2;
        c=c/2;
     bin=bin+(r*base);
     
        base=base*10;
        
    }
    
    while(bin>0)
    {
          r=bin%10;
        bin=bin/10;
           
        if(r==1)
        {  d++;
            
        }
           
        
    }
   printf("%d",d);
}
