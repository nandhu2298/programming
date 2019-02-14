#include <stdio.h>

int main()
{
 
 
 int i;
 char N[100000];
 gets(N);
 
 for(i=0;N[i]!='\0';i=i+3)
 {
     printf("%c",N[i]);
     
 }

 
}
