#include <stdio.h>
#include <math.h>

int factorial(int n)              //Συνάρτηση παραγοντικού//
{ int  i;
    int f = 1;

        for(i=1; i<=n; ++i)
        {
            f *= i;              // factorial = factorial*i;
        }
        return f;
    }


float Taylor (int N, float x)                   //Συνάρτηση Taylor//
 {
    int i;
    float e, z;
    i=0;
    e=0;
    while(i<=N){
        z=(float)factorial(i);
        e=e+(pow(x,i)/z);
        i=i+1;
    }
    return e;

      }


int main()
    {
    int N, f;
    float e,x;                 //e=Exponential function//
    printf("Type a positive number or zero: \n");
    scanf(" %d", &N);
    printf("You typed: %d \n", N );

    for (x=0.1; x<=2.0001; x=x+0.1 ) {
        printf("%f \n", Taylor(N, x));

    }
    return 0;
    }
