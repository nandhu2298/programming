#include <stdio.h>

int main()
{
   
  char S[1000];
  int c=0,j;
  gets(S);
  

      
      
  for(j=0;S[j]!='\0';j++)
  {
      
      
      if(S[j]=='a'||S[j]=='e'||S[j]=='i'||S[j]=='o'||S[j]=='u'||S[j]=='A'||S[j]=='E'||S[j]=='I'||S[j]=='O'||S[j]=='U')
      {
          
        c++; 
        break;
          
      }
      
      
      
 }
      if(c!=0)
      printf("yes");
      else
      printf("no");
      
      
      
   
}
