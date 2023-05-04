#include <stdio.h>
#include <stdlib.h>

int minimum(int* x,int* y){
if(*x  < *y){
    return *x;
}
else{
return *y;
 }
}

int adres_minimum(int* x,int* y){
if(*x  < *y){
    return x;
}
else{
return y;
 }
}

void zamien(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y= temp;


}
void zamien_jesli(int *x, int *y){
    if(*x>*y){
    int *t;
    t= * x;
    *x = *y;
    *y=  *t;
}
}

void zamien_alternatywnie(int *x, int *y){
    int *t=malloc(sizeof(int));
    *t= * x;
    *x = *y;
    *y=  *t;
}

int suma_stalych(const int*x , const int* y){

int sum = *x + *y;
return sum;

}

void przepisywanie_wartosci(int n, int *w){

*w=n;

}

int* rezerwuj(){

return malloc(sizeof(int));
}


int* rezerwuj_blok_n(int n){

return malloc(n*sizeof(int));
}

double fun(int x){
return 3*x;
}

int kwad(int x){

return x*x;
}

double gie(double (*f)(int x),int (*g)(int x)n, int n){
int i;
for(i=0;i<=n;i++){

if(f(i)!=g(i)){


    return 0;
}

    return 1;

}





int main()
{
int a=17;
int b=9;

//printf("%d", minimum(&a,&b));
//printf("%d", adres_minimum(&a,&b));
//zamien(&a,&b);
//int * wsk = rezerwuj();
//printf("%p\n", wsk);
//printf("%d", *wsk);
//printf("%f", gie(&fun,8));
   return 0;


}
