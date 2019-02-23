#include <stdio.h>
#include<string.h>
int main()
{
char S[10000];
gets(S);
int K,i,j,l,c;
scanf("%d",&K);
l=strlen(S);
for(i=0;i<K;i++)
{
 
c=S[l-1];

for(j=l-1;j>=0;j--)
{
    
 S[j]=S[j-1];

}
S[0]=c;



}
printf("%s",S);

}
