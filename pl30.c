#include <stdio.h>

int main()
{
  char a[100000],b[100000];
  int i,N,c=0;
  gets(a);
  gets(b);
  scanf("%d",&N);
  for(i=0;a[i]!='\0';i++)
  {
     
          if(a[i]!=b[i])
          c++;
          
          
      }
      
      
      
  if(c==N)
  printf("yes");
  else
  printf("no");
  
  
  
  
  
  
  
  
  
  
}
