#include<stdio.h>

void main()
{
  long N;
    scanf("%ld",&N);
    if((N>=-2,147,483,648&&N<=2,147,483,647)||(-32,768 &&N<= 32,767 ))
    {
      printf("INT");
    }
   else if(N>=-2,147,483,648 &&N<= 2,147,483,647)
    {
         printf("LONG");
    }
   
    
}
