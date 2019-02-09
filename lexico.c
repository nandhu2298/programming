#include <stdio.h>

void main()
{
    
    char S[10000],t;
    int i,j;
    gets(S);
    for(i=0;S[i]!='\0';i++)
    {
        
        for(j=i+1;S[j]!='\0';j++)
        {
            
            if(S[i]>S[j])
            {
            
            
          t=S[i];
          S[i]=S[j];
          S[j]=t;
            
            
            }
            
            
        }
        

        
        
        
    }
    
    printf("%s",S);
    
    
    
    
}
