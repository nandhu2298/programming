#include <stdio.h>

int main()
{
    char S[1000];
    int K,i;
    gets(S);
    scanf("%d",&K);
    for(i=0;i<K;i++)
    {
      printf("%c",S[i]);  
        
    }
    return 0;
}
