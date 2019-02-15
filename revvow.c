#include <stdio.h>
#include<string.h>
int main() 
{ 
    int N,i; 
        char S[100000];

    gets(S); 
     scanf("%d",&N);
    for(i=0;S[i]!='\0';i++) 
    { 
        
        if(S[i]=='a'|| S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u'||S[i]=='U'||S[i]=='A'||S[i]=='E'||S[i]=='I'||S[i]=='O')
    { 
        S[i]='0';
      
    } } 
    for(i=N-1;i>=0;i--) 
    { 
        
        if(S[i]!='0') 
    
    { printf("%c",S[i]); 

    
} }
return 0;
}
