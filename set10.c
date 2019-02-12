#include <stdio.h>

int main()
{
    char S[1000];
   int N,l,i;
   gets(S);
   scanf("%d",&N);
   l=strlen(S);
   
for(i=l;i>N;i--)
{
    
    
    printf("%c",S[i]);
}

   
    return 0;
}
