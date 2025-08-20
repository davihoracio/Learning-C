#include <stdio.h>
#include <math.h>

int main(){
    double x1 = 0, x2 = 0, y1 = 0, y2=0, distancia = 0;

    //Ponto 1
    scanf("%lf %lf", &x1, &y1);

    //Ponto 2
    scanf("%lf %lf", &x2, &y2);

    //Distância entre os dois
    distancia = sqrt(pow((x2-x1), 2)+ pow((y2-y1), 2));
    
    printf("%.4lf\n", distancia);

    return 0;
}