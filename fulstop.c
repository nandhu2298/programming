

#include <stdio.h>
#include<string.h>
int main()
{
   char s[100];
   gets(s);
   int len=strlen(s);
   
   s[len]='.';
 
   printf("%s",s);
    return 0;
}
