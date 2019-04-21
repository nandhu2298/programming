#include <stdio.h>

int main()
{
    int N,a[10][10],i,j;
    float c=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        
        for(j=0;j<N;j++)
        {
            
        
        scanf("%d",&a[i][j]);
       c=c+a[i][j];
        }
    }
    
 printf("%1f",c/(N*N));
    
    

    return 0;
}
