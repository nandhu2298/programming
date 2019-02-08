#include<stdio.h>
#include <math.h>

int main()
{
int a,b,c;
scanf("%d %d",&a,&b);
if(a<pow(2,32)&&b<pow(2,32))
{
c=b-a;
   
   printf("%d",abs(c));
   
   
}

    return 0;
}
