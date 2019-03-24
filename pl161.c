#include <stdio.h>
int main() 
{

char s[30];
	int n,i,j,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
       gets(s);

	for(i=0;i<n;i++)
	{
		for(j=0;s[j]!='\0';j++)
		{
			if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')
			{
				f=1;
				break;
			}
		}
		if(f==0)
		break;
	
	}
	if(f==0)
		printf("no");

	else
		printf("yes");

}
