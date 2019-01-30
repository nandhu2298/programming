#include<stdio.h>
#include<conio.h>
void main()
{
char s[100];

int i,d,c=0,j,x,y=0,n,k,v;
gets(s);

for(i=0;s[i]!='\0';i++)
{
while(s[i]!='@')
{
d=i;
c++;
}}

for(j=d+2;s[i]!='\0';i++)
{
if(s[j]=='@')
{
 x=1;
}


while(s[j]!='.')
{
n=j;
y++;
}}
for(k=n+1;s[k]!='\0';k++)
{
 if(s[k]=='.'&&s[k+1]=='c'&&s[k+2]=='o'&& s[k+3]=='m')
 {

  v=1;
  break;
}}
if(v==1&&c>3&&x!=1&&y>5)
printf("valid");
else
printf("in");

getch();
}
