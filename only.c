#include <stdio.h>
int main()
{
int N,i,j,k,c=0;
scanf("%d",&N);

int s[N];
for(i=0;i<N;i++)
{
    scanf("%d",&s[i]);
}

  for(i=0;i<N;i++)
 {
    c=1;
    for(j=i+1;j<N;j++)
    {
        if(s[i]!='$'&&s[j]!='$')
        {
        if(s[i]==s[j])
        {
            c++; 
            s[j]='$';
            
         }
      }
    }
    
    if(s[i]!='$')
    {
    
    if(c==1)
    {
 
  k=s[i];
  }
  }}
  printf("%d",k);
return 0;
}   
