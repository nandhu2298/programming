#include <stdio.h>

int main()
{
    char s[1000];
    int c=0,d,i,x=0;
    gets(s);
    
    for(i=0;s[i]!='\0';i++)
    {
        
        if(s[i]=='@'&&s[i-1]>='a'&&s[i-2]>='a'&&s[i-3]>='a'&&s[i-4]>='a'&&s[i+1]>='a'&&s[i+2]>='a'||s[i+3]>='a'||s[i+4]>='a')
        {
            
            
              c++;
           // printf("%d",c);
            d=i;
            
        }
            if(s[i]=='.')
        {
            
            
              c++;
           // printf("%d",c);
            
            
        }
        
  }
  
  
      for(i=d;s[i]!='\0';i++)
    {
        
        if(c==2)
        {
            
            
              
        if(s[i]=='.'&&s[i+1]=='c'&&s[i+2]=='o'&&s[i+3]=='m')
        {
            
            
            
            
            x++;
               
            
        } 
            
           
            
            
        }
        
        
  }
   
  
  
  if(x!=0)
   printf("valid");
   else
   printf("invalid");
  
  
  
  
  
  
  
  
  
  
  
  
    return 0;
}
