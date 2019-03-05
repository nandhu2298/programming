#include <stdio.h>

int main()
{
   int N,a[100000],i,j;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   
      for(i=0;i<N;i++)
   {
     for(j=i+1;j<N;j++)
     {
         if(a[i]!='\0'&&a[j]!='\0')
         {
      if(a[i]==a[j])  
      {
          a[j]='\0';
      }
         
     }
       
     }
   }
   
   
      for(i=0;i<N;i++)
   {
        if(a[i]!='\0')
        printf("%d ",a[i]);
       
   }
   
  
    return 0;
}
