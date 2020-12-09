#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    double a;
    for (int i=0; i=3; i++)
    {
        a=(double)rand()/(double)(RAND_MAX/2)-1;
        printf("%f",a);
    }
    return 0;
}
