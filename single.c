#include <stdio.h>

int main()
{
  char s[10000],t[10000];
  int i,k=0;
  gets(s);
  gets(t);
  for(i=0;s[i]!='\0';i++)
  {  
          if(s[i]!=t[i])
          {
              
             k++; 
           

          }
   
      }
  
  if(k==1)
  printf("yes");
  else
  printf("no");
    return 0;
}
