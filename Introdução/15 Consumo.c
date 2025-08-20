#include <stdio.h>

int main(){
    int X = 0;
    double Y = 0, consumo_medio = 0;

    //Distância 
    scanf("%d", &X);
    // Combustível
    scanf("%lf", &Y);

    consumo_medio = (double)X/Y;

    printf("%.3lf km/l\n", consumo_medio);

    return 0;
}