#include <stdio.h>

int main()
{
 int N,i,c=0;
 scanf("%d",&N);
 
 for (i=1;i<=10;i++)
 {
     
     
     if(N==i)
     {
         
        c++; 
       
     }
   
 }
 
 if(c!=0)
 printf("yes");
 else
 printf("no");
 
 
  
    return 0;
}
