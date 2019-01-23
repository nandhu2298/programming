#include <stdio.h>

int main()
{
    char s[1000000];
    int i,c;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i=i+2)
    {
        c=s[i];
        s[i]=s[i+1];
        s[i+1]=c;
      
        
        
    }
    for(i=0;s[i]!='\0';i++)
    {
        
        printf("%c",s[i]);
    }

}
