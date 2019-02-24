#include <stdio.h>
#include<string.h>
int main()
{
   
   
 char s[10000],t[10000];
 int i,c=0,l,l2;
 gets(s);
 gets(t);
 l=strlen(t);
 l2=strlen(s);
 
 for(i=0;s[i]!='\0';i++)
 {
if(s[i]>='a'&&s[i]<='z')
	s[i]=s[i]-32;
	}
for(i=0;t[i]!='\0';i++)
{

if(t[i]>='a'&&t[i]<='z')
t[i]=t[i]-32;
	   	}
 
 
 
if(l==l2)
{
    
for(i=0;s[i]!='\0';i++)
 {
     if(s[i]==t[i])
        c++;
 }
 
 
 if(c==l)  
   printf("yes");
  else
   printf("no");
    return 0;
    
}
else
  printf("no");
}
