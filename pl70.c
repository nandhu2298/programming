#include <stdio.h>
#include<string.h>

int main()
{

char s[1000],b[10]=" Answer";
int l,i;
gets(s);
l=strlen(s);

for(i=0;i<7;i++)
{
    
s[l]=b[i];
 
l++;
}

s[l]='\0';
printf("%s",s);

    return 0;
}
