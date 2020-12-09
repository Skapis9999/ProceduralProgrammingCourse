#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

typedef struct {
    double re;
    double im;
}complex;

void print_complex (complex z) {
    printf ("%lf + i x %lf\n", z.re, z.im);
}

double measure (complex z) {
    return sqrt(z.re * z.re + z.im * z.im);
}

int main () {
    unsigned int N, i;
    scanf ("%u",&N);
    printf("test4\n");
    srand(time(NULL));
    printf("test99\n");
    complex *array = malloc(N * sizeof(complex));
    printf("test1\n");
    if (array == NULL)
        return 1;
    //printf("test2\n");
    for (i = 0; i < N; ++i) {
        array[i].re = -1.0 + 2.0 * (double)rand()/(double)(RAND_MAX/2)-1;
        array[i].im = -1.0 + 2.0 * (double)rand()/(double)(RAND_MAX/2)-1;
    }
    //printf("test3\n");
    for (i = 0; i < N; ++i)
        print_complex(array[i]);
    free (array);
    return 0;
}
