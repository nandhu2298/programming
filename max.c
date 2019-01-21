#include <stdio.h>

int main()
{
  int a[10],i,m;
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
     }
    m=a[0];
     for(i=0;i<10;i++)
  {
   if(m<a[i])
    {
       m=a[i];
    }
  }
   printf("%d",m);
    return 0;
}
