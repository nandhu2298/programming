#include <stdio.h>
#include<string.h>
int main()
{
 char s[1000],k;
 int i,j,c=0,d=0,a[1000];
 gets(s);
  for(i=0;s[i]!='\0';i++)
 {
    c=1;
    for(j=i+1;s[j]!='\0';j++)
    {
        if(s[i]!='$'&&s[j]!='$')
        {
        if(s[i]==s[j])
        {
            c++; 
            s[j]='$';
            
         }
      }
    }
    
    if(s[i]!='$')
    
    if(c>d)
    {
    d=c;
  k=s[i];
  }
  }
  printf("%c",k);
return 0;
}   
