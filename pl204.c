#include <stdio.h>

int main(void) {

int N,s=0;
scanf("%d",&N);
int a[10],i,c=0;
if(N<=10000){
    
    for(i=0;i<N;i++)
    {
        
        scanf("%d",&a[i]);
    }
     for(i=0;i<N;i++)
    {
      
    if(a[i]<0)
    {
        
        s=s+a[i];
        
    }
    else
   c=1;
    
    
    
}
    
  
   if(c==0)
    printf("%d",s);
   else
    printf("0");
   
     
}
   



  return 0;
}
