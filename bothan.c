#include <stdio.h>

int main()
{
  char s[1000];
  int i,c=0,d=0;
  gets(s);
  
 for(i=0;s[i]!='\0';i++)
 {
     
     if(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z')
     {
         
         c++;
         
         
     }
     
     else if(s[i]>='1'&&s[i]<='9' )
     {
         
         d++;
         
         
     }
 
     
 }
 

 
  
  if(c!=0&&d!=0)
  printf("Yes");
  else
  printf("No");
  
  
  
    return 0;
}
