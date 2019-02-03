

#include <stdio.h>

int main()
{
   
  char S[1000],T[1000];
  int i,l,k=0,c=0,j;
  gets(S);
  
  l=strlen(S);
  for(i=l-1;S[i]!='\0';i--)
  {
      
 T[k]=S[i];
 //printf("%c",S[i]);
 k++;
 
 
      }
    
      
      
  for(j=0;S[j]!='\0';j++)
  {
      
      
      if(S[j]==T[j])
      {
          
        c++;  
          
      }
      
      
      
 }
      if(c==l)
      printf("yes");
      else
      printf("no");
      
      
      
   
}
