#include<stdio.h>
#include<string.h>
int main()
{
    char N[100000],K;
    int i,l,c=0;
    gets(N);
    scanf("%c",&K);
    l=strlen(N);
  
    for(i=0;i<l-1;i++) 
     {
       if(N[i]>='0' && N[i]<=K)
         {    c++;
         }
  
       }
       
     if(l-1==c)
        printf("yes");
    else
         printf("no");
    
}
