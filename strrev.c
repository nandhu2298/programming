#include <stdio.h>
#include<string.h>
int main()
{
char s[100000];
gets(s);
int i,n;
n=strlen(s);
for(i=n-1;i>=0;i--)
{
    
   printf("%c",s[i]);  
    
    
}
 
return 0;
}
