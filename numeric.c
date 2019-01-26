#include <stdio.h>

int main() {
  
char S[1000];
int i,c=0,n;

gets(S);
n=strlen(S);
for(i=0;S[i]!='\0';i++)
{
    
    if((S[i]>='0'&&S[i]<='9')||S[i]=='.')
    {
        c++;
        
    }
}
if(c==n)
printf("Yes");
else
printf("No");

return 0;
}
