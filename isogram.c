#include <stdio.h>

int main()
{
    char s[1000];
    int i,j,c=0;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        
        for(j=i+1;s[j]!='\0';j++)
        {
            
            if(s[i]==s[j])
            {
                
                c++;
                break;
                
            }
            
            
            
        }
        
        
    }
    
    
    if(c==0)
    printf("Yes");
    else
    printf("No");
    
    
    return 0;
}
