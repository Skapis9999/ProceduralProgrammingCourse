#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 8


void row(int arr[][],int a, int p, int K)

{
    for(int j=0; j<N; j++)                   //!!!!!!!!!!!!!!checks only row!!!!!!!!!!!!!!!
    {
        int sum=0;
        if(arr[K][j]==1)                    //every time a queen is in this row sum=+ If sum=0 this means no queen so no problem. If sum=1 one queen so no problem. If sum>1 then invalid formation
            sum++;
        if(sum>1)
        {
            break;                      //so if invalid break p stays 0 FALSE
        }
        else
        {
            p=(int*)a;                      //so valid formation and p pointer becoming a globally. p=1 (since i have made a=1) TRUE
        }
    }


int main()
{
    int **arr=malloc(N* sizeof(int*));           //allocate an N*N array
    if(arr==NULL)
    {
        printf ("Error \n");
        return 1;
    }
    for (unsigned int q=0; q<N; ++q)
    {
        arr[q]=malloc(N*sizeof(int));
        if(arr[q]==NULL)
        {
            return 2;
        }
    }
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            arr[i][j] = 0;                            //make the entire array 0
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            printf("%d", arr[i][j] );
    int x,y;
    printf("Enter the coordinations of the boxes of your 8 queens: \n");
    for (int i=0; i<N; i++)
    {
        scanf("%d", &x);
        scanf("%d", &y);
        arr[x][y]=1;
    }
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++)
            printf("%d \t", arr[i][j]);
    int a=1;
    int p=0;
    row( arr, a, p,N);
    printf("%d, %d", a,p);


    free(arr);
    return 0;

}
