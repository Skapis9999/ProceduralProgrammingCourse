#include<stdio.h>
#define D 8


void swap(int* first, int* second) {
  int temp = *first;
  *first = *second;
  *second = temp;
}

void bubblesort(int a[], int n)
{
    for (int i=1; i<n; ++i) {
        for (int j=0; j<n-1; ++j){
            if (a[j] > a[j + 1])
                swap( &a[j], &a[j + 1] );

        }
    }
}

int percentiles(int p, int N, int a[])
{   int n=(p/100)*N;
    bubblesort(a,N);
    int c=a[n];
    int* b=&c;
    return b;
}

int main()
{
    int a[D];
    printf("Insert an int matrix\n\a");
    for (int i=0; i<D; ++i)
        scanf("%d", &a[i] );
    int* b=percentiles(25,D,a);
    printf("25th percentile is %d\n", *b);
    int* c=percentiles(75,D,a);
    printf("75th percentile is %d\n", *b);
    int* d=percentiles(50,D,a);
    printf("50th percentile is %d\n", *b);

    return 0 ;
}


