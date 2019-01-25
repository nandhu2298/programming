#include <stdio.h>

int main()
{
  char S1[1000],S2[1000];
  gets(S1);
 gets(S2);
 

 int k=0,i,c[1000];

 for(i=0;S1[i]!='\0';i++)
 {
     
     c[k]=S1[i];
     k++;
     
 }
  for(i=0;S2[i]!='\0';i++)
 {
     
     c[k]=S2[i];
     k++;
     
 }
 c[k]='\0';
  for(i=0;c[i]!='\0';i++)
 {
     printf("%c",c[i]);
 }
  
    return 0;
}
