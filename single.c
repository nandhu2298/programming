#include <stdio.h>

int main()
{
  char s[10000],t[10000];
  int i,j,k=0;
  gets(s);
  gets(t);
  for(i=0;s[i]!='\0';i++)
  {
      for(j=0;t[j]!='\0';j++)
      {
          
          if(s[i]!=t[j])
          {
              
             k++; 
             printf("%d",k);
             break;
          }
          
        
      }
        if(k==0)
           break;
      
  }
  
  
  
  if(k==1)
  printf("yes");
  else
  printf("no");
    return 0;
}
