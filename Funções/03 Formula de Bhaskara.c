#include <stdio.h>
#include <math.h>

int calcular_bhaskara(double a, double b, double c, double* x1, double* x2);

int main(){
    double r1, r2;
    double entrada1, entrada2, entrada3;

    scanf("%lf %lf %lf", &entrada1, &entrada2, &entrada3);

    if(calcular_bhaskara(entrada1, entrada2, entrada3, &r1, &r2)){
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
    else printf("Impossivel calcular\n");
}

int calcular_bhaskara(double a, double b, double c, double* x1, double* x2){
    double delta = 0;

    delta = pow(b, 2) - 4*a*c;

    if(2*a == 0 || delta < 0) return 0;

    *x1 = (-b+sqrt(delta))/(2*a);
    *x2 = (-b-sqrt(delta))/(2*a);
    
    return 1;
}