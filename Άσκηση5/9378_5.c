#include <stdio.h>
#define N 9

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void bubblesort(int arr[])
{
    for(int i=1;i<N; i++)
        for (int j=0; j<N-1; j++)
            if (arr[j]>arr[j+1])
                swap (&arr[j], &arr[j+1]);
}

void percentiles(int *x,int *y, int *z)
{
  *x=N*25/100;
  *y=N*50/100;
  *z=N*75/100;
}

int main(){
  int arr[N];
  for (int i=0; i<N; i++)
        scanf("%d", &arr[i]);
  bubblesort(arr);
  int a,b,c;
  percentiles(&a,&b,&c);
  printf("%d, %d, %d\n", arr[a],arr[b],arr[c]);

}
