

#include <stdio.h>
#include<string.h>
int main()
{
char s[1000000];
int i,l,c=0;
gets(s);

l=strlen(s);
for(i=0;s[i]!='\0';i++)
{
    if(s[i]>='A'&&s[i]<='Z')
    {
        
    s[i]=s[i]+32;
        
    }
    else if(s[i]>='a'&&s[i]<='z')
    {
        
    s[i]=s[i]-32;
        
    }  
        
       
     
}

for(i=0;s[i]!='\0';i++)

 {
printf("%c",s[i]);

}


}
