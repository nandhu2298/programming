#include <stdio.h>

int main()
{
    char S[1000];
    int i,c=0;
    gets(S);
  
    for(i=0;S[i]!='\0';i++)
    {
     if(S[i]!='1'&&S[i]!='0')
     {
         
         c++;
         break;
     }
        
    }
    
    if(c==0)
    printf("yes");
    
    
    else
    printf("no");
    
    
    
    
    return 0;
}
