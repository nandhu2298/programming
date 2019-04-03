#include <stdio.h>

int main()
{
   char S[10000],b[10000];
   int i,j,k=0;
   gets(S);
   
   for(i=0;S[i]!='\0';i++)
   {
       
       if(S[i]!=' ')
       {
           
           b[k]=S[i];
           
           k++;
         
       }
       
       else
       {
           b[k]='\0';
           
          for(j=k-1;j>=0;j--)
          {
              
           printf("%c",b[k]);   
              
          }
           
           
           
           
           
       }
       
       
       
       
       
       
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    return 0;
}
