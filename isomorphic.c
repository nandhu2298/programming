#include <stdio.h>
#include<string.h>
int main()
{
  
  char a[100000],b[100000];
  int l1=0,l2=0,i,c=0;
  gets(a);
  gets(b);
  for(i=0;a[i]!='\0';i++)
  {
      
      l1++;
      
  }
    for(i=0;a[i]!='\0';i++)
  {
      
      l2++;
      
  }
  
  
  if(l1==l2)
  {
      
      
     for(i=0;a[i]!='\0';i++)
     {
         if(a[i]==a[i+1]&&b[i]==b[i+1])
         {
             
           c++;
             
         }
        
        
          if(a[i]!=a[i+1]&&b[i]!=b[i+1])
         {
             
             c++;
               
             
         }
        
     }
      
      if(c==l1)
    printf("yes");
    else
    printf("no");
      
      
}
  
  else
  {
      
      printf("no");
  }

    return 0;
}
