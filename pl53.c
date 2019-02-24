#include <stdio.h>

int main()
{
   
   
 char s[10000];
 int i,c=0;
 gets(s);
 
 for(i=0;s[i]!='\0';i++)
 {
     c++;
 }
   
   printf("%d",c);
    return 0;
}
