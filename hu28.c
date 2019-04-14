#include <stdio.h>

int main()
{
  char S[10000];
  int i,j;
  gets(S);
  for(i=0;S[i]!='\0';i++)
  {
      for(j=i+1;S[j]!='\0';j++)
      {
          
          
          if(S[i]!='$'&&S[j]!='$')
          {
          if(S[i]==S[j])
          {
              
              
              S[j]='$';
              
          }
          
          
          
          
          
          
      }
      
      
      
      }
      
      
      
  } for(i=0;S[i]!='\0';i++)
  {if(S[i]!='$')
  
  printf("%c",S[i]);
  }
  
    return 0;
}
