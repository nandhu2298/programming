#include <stdio.h>
void main()
{
    long int N,a[10000],i=0,K,P,t,s,c=1,r;
    scanf("%ld %ld %ld",&N,&K,&P);
    t=N;
    while(t)
    {
        t=t/10;
        c=c*10;
    }
    c=c/10;
    while(N)
    {
        r=N/c;
        a[i]=r;
        i++;
        N=N%c;
        c=c/10;
    }
    while(K)
    {
        s=a[P];
        K--;
        P++;
    }
    printf("%ld ",s);

}
