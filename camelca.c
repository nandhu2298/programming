#include <stdio.h>

int main()
{
    int i;
char s[1000];
gets(s);

if(s[0]>='a'&&s[0]<='z')
 s[0]=s[0]-32;
 
 for(i=1;s[i]!='\0';i++)
 {
     
if(s[i]==' '&&(s[i+1]>='a'&&s[i+1]<='z'))
     {
         
      s[i+1]=s[i+1]-32;
     
     
 }}
 printf("%s",s);
  
   
    return 0;
}
