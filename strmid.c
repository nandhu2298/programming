#include <stdio.h>
#include<string.h>

int main()
{
   
  char S[10];
  int l,j;
  gets(S);
  
l=strlen(S);
      
      
  if(l%2==0)
  {
   
     S[l/2]='*';
      
      S[(l/2)-1]='*';
      
  }
  else
	{
		S[l/2]='*';
	}


      printf("%s",S);
      
   
}

