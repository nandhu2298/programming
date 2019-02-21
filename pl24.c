

#include <stdio.h>

int main()
{
char s[100000];
int i,l,c=0;
gets(s);

l=strlen(s);
for(i=0;s[i]!='\0';i++)
{
    if(s[i]>='1'&&s[i]<='9')
    {
        
       c++;
        
        
    }
      

  
    
    
}



if(c==l)
printf("yes");
else
printf("no");





}
