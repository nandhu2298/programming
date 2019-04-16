#include <stdio.h>

int main()
{ int c=0,d=1,i;
   char S[1000];
  
   gets(S);
   
   
   
   if(S[0]>='A'&&S[0]<='Z')
   {
       c++;
   }
   for(i=0;S[i]!='\0';i++)
   {
       
       if(S[i]==' '&&S[i+1]>='A'&&S[i+1]<='Z')
      {
          
          
          c++;
          
      }
       
       if(S[i]==' ')
       {
           
           d++;
       }
       
       
   }
   
   if(c==d)
   printf("yes");
   else
   printf("no");
}
