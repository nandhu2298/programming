#include <stdio.h>

int main()
{
   
   char a[20];
   
   gets(a);
   
   if ((strcmp(a, "Sunday") == 0)||(strcmp(a, "Saturday") == 0))
   
 
   {
       
       printf("yes");
       
   }
   else
   {
       
       printf("no");
   }
   }
