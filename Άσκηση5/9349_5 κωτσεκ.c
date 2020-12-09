#include <stdio.h>
#define n 5

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void bubblesort(int a[ ]){
unsigned int i, j;
for(i=1; i<=n; ++i){
    for(j=0; j<=n-1; ++j){
        if(a[j] > a[j+1])
            swap( &a[j], &a[j+1]);
    }
}
}

void func(int a[ ]){
int p, k; //p-iosto morio
bubblesort(a);
for(p=25; p<80; p+=25){
    k=p*n/100;
    printf("H thesi tou %d ekatosthmoriou einai: %d\n", p, k);
    printf("H timi autou tou ekatostimoriou einai: %d\n", a[k]);
}
}

int main(){
int a[n]={1, 5, 8, 4, 9};
func(a);
return 0;
}
