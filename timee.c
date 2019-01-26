
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int m1,h1,m2,h2,m3,h3;

	scanf("%d %d",&h1,&m1);

	scanf("%d %d",&h2,&m2);
	h3=abs(h1-h2);
		m3=abs(m1-m2);
	printf("%d %d",h3,m3);
}
