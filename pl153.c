#include <stdio.h>

int main()
{
char s[1000];
int K,i;
gets(s);
scanf("%d",&K);

for(i=0+K-1;s[i]!='\0';i=i+K)
{
    
    
    printf("%c ",s[i]);
    
}
    return 0;
}
