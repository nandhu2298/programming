#include <stdio.h>

int main()
{
    char s[1000000];
    int i,c;
gets(s);


   
    for(i=1;s[i]!='\0';i++)
    {
          if(s[i]>='A'&&s[i]<='Z')
       {
         s[i]=s[i]+32;   
           
       }}


if(s[0]>='a'&&s[0]<='z')
{
    
    
    s[0]=s[0]-32;
}





    for(i=1;s[i]!='\0';i++)
    {
     
     
       if(s[i]==' '&& s[i+1]!=' '&&(s[i+1]>='a'&&s[i+1]<='z')) 
       {
           
           s[i+1]=s[i+1]-32;
           
       }
       
       
     
       
        
    }




    for(i=0;s[i]!='\0';i++)
    {
        
        printf("%c",s[i]);
    }

}
