#include <stdio.h>

int main()
{
char s[1000];
int K,i;
gets(s);
scanf("%d",&K);

for(i=0+K-1;s[i]!='\0';i=i+K)
{
    
    if(s[i]>=97 && s[i]<=122)
			s[i]=s[i]-32;

    
}    printf("%s ",s);
    return 0;
}
