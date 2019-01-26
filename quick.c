#include<stdio.h>
void quicksort(int c[25],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(c[i]<=c[pivot]&&i<last)
            i++;
         while(c[j]>c[pivot])
            j--;
         if(i<j){
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;
         }
      }

      temp=c[pivot];
      c[pivot]=c[j];
      c[j]=temp;
      quicksort(c,first,j-1);
      quicksort(c,j+1,last);

   }
}

int main(){
   int i,N, c[25];

  
   scanf("%d",&N);
   
if(N>=1 && N<=100000)
{
   for(i=0;i<N;i++)
      scanf("%d",&c[i]);

   quicksort(c,0,N-1);

   for(i=0;i<N;i++)
      printf(" %d",c[i]);
}
   return 0;
}
