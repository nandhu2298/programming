#include <stdio.h>

int main()
{
    int i,c=0;
   char a[1000];
   gets(a);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]>='0'&&a[i]<='9')
       {
        
c++;
           
       }
      
   }
   printf("%d",c);
    return 0;
}
