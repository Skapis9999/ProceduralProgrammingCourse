#include<stdio.h>
#define N 3
#define M 3

int main() {
    int m[N][M];
    for (unsigned int i=0; i<N; ++i){
        for (unsigned int j=0; j<M; ++j){
                scanf("%d", &m[i][j]);
                printf("m[%d][%d]=%d \n", i+1, j+1, m[i][j]);}}
    for (unsigned int i=0; i<N; ++i)
        for (unsigned int j=0; j<N; ++j)
            printf("m^T[%d][%d]=%d \t", i+1, j+1, m[j][i]);
    printf("\n");
    for (unsigned int i=0; i<N; ++i)
        for (unsigned int j=0; j<N; ++j)
            printf("m+m^T[%d][%d]=%d \t", i+1, j+1, m[i][j]+m[j][i] );
    printf("\n");
    for (unsigned int i=0; i<N; ++i)
        for (unsigned int j=0; j<N; ++j)
            printf("m-m^T[%d][%d]=%d \t", i+1, j+1, m[i][j]-m[j][i] );
    return 0;
}
