#include <stdio.h>
#include<string.h>
int main()
{
   char s[10000];
   int i,c=0,l;
  
   gets(s);
   l=strlen(s);
   for(i=0;s[i]!='\0';i++)
   {
       
       
       
       if(s[i]=='a'||s[i]=='b')
       c++;
       
       
       
       
   }

   if(c==l)
   printf("yes");
 
   

    else if(c==l-1)
   printf("yes");
   else
   printf("no");
    return 0;
}
