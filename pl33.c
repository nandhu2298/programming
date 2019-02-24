#include <stdio.h>

int main()
{


int N;
scanf("%d",&N);
int a[100][100],i,j,c=0;
for(i=1;i<=N;i++)
{for(j=1;j<=N;j++)
    {
         scanf("%d",&a[i][j]);  }}
for(i=0;i<=N;i++)
{
    for(j=0;j<=N;j++)
    {
      if(a[i][j]==1)
      {
          if(a[i-1][j]==0&&a[i][j-1]==0&&a[i][j+1]==0&&a[i+1][j]==0)
       
          {
              c++;
              
          }
          } }
    }
    
    printf("%d",c);
}
