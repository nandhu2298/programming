#include <stdio.h>

int main()
{
    char s[1000],c[1000];
    int i,k=0;
    gets(s);
   
    
 for(i=0;s[i]!='\0';i++)
 {
     
   if(s[i]>='1'&&s[i]<='9')
   {
       
     c[k]=s[i]; 
     k++;
       
   }
     
     
     
 }
  c[k]='\0';  
    
    printf("%s",c);
    return 0;
}
