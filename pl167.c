
#include <stdio.h>

int main(void) 
{
	char s[30];
	int i,l,flag=0;
gets(s);
	l=strlen(s);
	for(i=2;i<=l/2;i++)
	{
		if(l%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("yes");
		
	}
	else
	{
		printf("no");
	}
	
	return 0;
}
