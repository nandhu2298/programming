#include <stdio.h>
#include<string.h>
int main()
{
  
char N[100000];
int i;
gets(N);

for(i=0;N[i]!='\0';i++)
{
  
  if(N[i]=='Z' )
  printf("C");
  else if(N[i]=='Y')
  printf("B");
  else if(N[i]=='X')
  printf("A");
  else
    
  printf("%c",N[i]+3);
    

    
    
}



    return 0;
}
