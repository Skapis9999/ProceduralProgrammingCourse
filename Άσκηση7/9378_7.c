#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


typedef struct
{
    double real;
    double imaginary;
} Complex;

void f1(Complex c)
{
    printf("The complex number is %f+i*%f \n" , c.real, c.imaginary);
}


double f2(Complex c)
{
    double metro=sqrt(pow(c.real,2)+pow(c.imaginary,2));
    return metro;
}

void find_max(Complex a[],int N)
{
    int pos=0;
    double max=f2(a[0]);
    for(unsigned int i=1; i<N;i++)
    {
        if(f2(a[i])>max)
        {
            pos=i+1;
            max=f2(a[i]);
        }
    }
    printf("The position of maximum is %d and maximum is %f", pos,max);

}

int main()
{
    srand(time(NULL));
    printf("Type an integer number\n");
    int N;
    scanf("%d", &N);
    Complex *array=malloc(N*sizeof(Complex));
    if(array==NULL)
        return 1;
    for(unsigned int i=0; i<N; ++i)
    {
        array[i].real=(double)rand()/(double)(RAND_MAX/2)-1;
        array[i].imaginary=(double)rand()/(double)(RAND_MAX/2)-1;;
    }
    for(unsigned int i=0; i<N; ++i)
    {
        f1(array[i]);
    }
    find_max(array, N);
    free(array);
    return 0;
}
