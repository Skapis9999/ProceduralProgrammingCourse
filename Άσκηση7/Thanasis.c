#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

typedef struct
{
    double real;
    double imaginary;
} Complex;

void function1(Complex c)
{
    printf("The complex number is %f+i*%f \n" , c.real, c.imaginary);
}


double function2(Complex c)
{
    double metro=sqrt(pow(c.real,2)+pow(c.imaginary,2));
    return metro;
}

void find_max(Complex a[],int N)
{
    int pos=0;
    double max=function2(a[0]);
    for(unsigned int i=1; i<N;i++)
    {
        if(function2(a[i])>max)
        {
            pos=i+1;
            max=function2(a[i]);
        }
    }
    printf("The position of maximum is %d and maximum is %f", pos,max);

}

int main()
{
    srand(time(NULL));
    int N;
    scanf("%d", &N);
    Complex *a=malloc(N*sizeof(Complex));
    if(a==NULL)
        {
        free (a);
        return 1;
        }
    for(unsigned int i=0; i<N; ++i)
    {
        a[i].real=(double)rand()/(double)(RAND_MAX/2)-1;
        a[i].imaginary=(double)rand()/(double)(RAND_MAX/2)-1;;
    }
    for(unsigned int i=0; i<N; ++i)
    {
        function1(a[i]);
    }
    find_max(a, N);
    free(a);
    return 0;
}
