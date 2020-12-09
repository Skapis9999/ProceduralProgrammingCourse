#include<stdio.h>
#define N 9


void swap(int* first, int* second) {
  int temp = *first;
  *first = *second;
  *second = temp;
}

void bubblesort(int arr[], int n)
{

        for (int j=0; j<n-1; ++j){
            if (arr[j] > arr[j + 1])
                swap( &arr[j], &arr[j + 1] );

        }
    }


void percentiles(int * p1, int * p2, int * p3, int arr[])
{
    * p1=arr[N*(25/100)];
    * p2=arr[N*(50/100)];
    * p3=arr[N*(75/100)];
}

int main()
{
    int arr[N];
    printf("Insert an int matrix\n\a");
    for (int i=0; i<N; ++i)
        scanf("%d", &arr[i] );
    for (int i=0; i<N; ++i)                     //τυπώνει πινακα
        printf("%d \n", arr[i]);
    bubblesort(arr,N);
    for (int i=0; i<N; ++i)                     //τυπώνει ταξινομημενο τον πινακα
        printf("%d \n", arr[i]);
    int  x;
    int  y;
    int  z;
    percentiles(&x, &y, &z, arr);
    printf("%d, %d, %d", x, y, z);
    return 0 ;
}


