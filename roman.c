#include <stdio.h>
#include<string.h>
int main()
{
  
  char s[110];
  int a[260],i,k,l;
  gets(s);
  l=strlen(s);
  for(i=0;i<l;i++)
{
    
    
    switch(s[i])
    {
        
      case 'I':
      a[i]=1;
      break;
      
      case 'V':
      a[i]=5;
      break;
      
      case 'X':
      a[i]=10;
      break;
      
      case 'L':
      a[i]=50;
      break;
      
      
      case 'C':
      a[i]=100;
      break;
      
      case 'D':
      a[i]=500;
      break;
      
      case 'M':
      a[i]=1000;
      break;
      
        
        
        
        
    }}
    
  k=a[l-1];
  for(i=l-1;i>0;i--)
  {
      
      if(a[i]>a[i-1])
      {
          
          k=k-a[i-1];
          
      }
      if(a[i]<=a[i-1])
      {
          
          
          
          k=k+a[i-1];
      }
      
      
      
      
      
      
      
      
      
      
      
      
  }
    
    
    
    
    printf("%d",k);
    
    
    
    
    

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
    return 0;
}
