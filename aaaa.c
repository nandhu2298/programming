#include <stdio.h>

int main()
{
    char s[1000];
    int c=0,d,i,x=0,t=0,r=0;
    gets(s);
    
    for(i=0;s[i]!='\0';i++)
    {
        
        if(s[i]=='@')
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
     
    for(i=0;s[i]!='@';i++)
    {
        
        t++;
        
           
    
        
        
        
    }
  
  
      for(i=d;s[i]!='.';i++)
    {
        r++;
  
    }
  
  
      for(i=d;s[i]!='\0';i++)
    {
        
        
        
        
        
        
        if(c==2&&t>3&&r>3)
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
