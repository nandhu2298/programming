#include <stdio.h>

int main(void) {

char S[1000],a[1000],b[1000];
int i,k=0,l=0;
gets(S);

for(i=0;S[i]!='\0';i++)
{
    
    if(S[i]=='e'||S[i]=='a'||S[i]=='i'||S[i]=='o'||S[i]=='u')
    {
        
        a[k]=S[i];
        k++;
        
    }
    else
    {
        
        
        
        b[l]=S[i];
        l++;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
}
   

for(i=0;a[i]!='\0';i++)
{
    printf("%c",a[i]);
}




for(i=0;b[i]!='\0';i++)
{
    printf("%c",b[i]);
}








  return 0;
}
