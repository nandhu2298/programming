#include <stdio.h>

int main() {
  
  char s1[1000],s2[1000];
  int i,c=0,d=0;
  gets(s1);
  gets(s2);
  
  for(i=0;s1[i]!='\0';i++)
  {
     c++; 
  
      
  }
  for(i=0;s2[i]!='\0';i++)
  {
     d++; 
     
  }
  
  if(c>d)
  {
      printf("%s",s1);
  }

else
{
    printf("%s",s2);
}
    return 0;
}
