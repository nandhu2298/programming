#include<stdio.h>

int main()
{
int N,s=0,r;
scanf("%d",&N);


if(N<=1000)
{
  while(N)
  {
  r=N%10;
  s=(s*10)+r;
  N=N/10;
  }
     
}

printf("%d",s);
    return 0;
}
