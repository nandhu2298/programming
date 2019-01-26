
#include<stdio.h>
void main()
{
	int m1,h1,m2,h2,m3,h3;

	scanf("%d %d",&h1,&m1);

	scanf("%d %d",&h2,&m2);
	h3=h2-h1;
	
	if(m1>m2)
	  
	m3=60-m1+m2;
	else
	m3=m2-m1;
	printf("%d %d",h3,m3);
}
