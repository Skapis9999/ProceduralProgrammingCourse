#include <stdio.h>
#include <math.h>

double f(double x);

double derf(double x);

int main(){
    double y , riza,e ;
    //unsigned  long e;
    printf("Type a prediction of the solution and one limit. \n");
    scanf("%lf , %lf  ", &y, &e);                                   //lambano ena y poy einai to x miden riza kata proseggisi me to mati kaI ena e poy einai ena orio
    printf("%f , %f \a \n", y, e);
    riza=y;
    riza-=f(y)/derf(y);                                               //methothos tou neftona
    while (fabs(f(riza))<e){                                   //fabs einai to apolito gia double kai float arithmous kai vrisketai stin math.h
        riza-=f(riza)/derf(riza);
         }
    printf("So the solution is= %f \n\a", riza);
    return 0;
    }
double f(double x){
    double f, log10(double);
    f=4*log10(x-1)+3*x*x;
    return f;
}

double derf(double x){
    double derf, log10(double);
    derf=4/((x-1)*log(10))+6*x;
    return derf;
}
