#include<stdio.h>
#include <string.h>

int main()
{
   char s[1000],a[1000],b[1000];
   int i,k=0;
   gets(s);
   for(i=0;s[i]!='\0';i=i+2)
   {
       
       
       
      
      a[k]=s[i]; 
      k++;
       
       
   }
   
   a[k]='\0';
   k=0;
      for(i=1;s[i]!='\0';i=i+2)
   {
       
       
       
      
      b[k]=s[i]; 
      k++;
       
       
   }
   b[k]='\0';
   
   printf("%s %s",a,b);
   
   
   

    return 0;
}
