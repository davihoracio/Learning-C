#include <stdio.h>
#include <math.h>

int main() {
    double A = 0, B = 0, C = 0, area_triangulo = 0, area_circulo = 0, area_trapezio = 0, area_quadrado = 0, area_retangulo = 0;
    const double pi = 3.14159;

    // Lê os valores de A, B e C
    scanf("%lf %lf %lf", &A, &B, &C);

    // Calcula as áreas
    area_triangulo = (A * C) / 2;
    area_circulo = pi * pow(C, 2);
    area_trapezio = ((A + B) * C) / 2;
    area_quadrado = pow(B, 2);
    area_retangulo = A * B;

    // Imprime os resultados
    printf("TRIANGULO: %.3lf\n", area_triangulo);
    printf("CIRCULO: %.3lf\n", area_circulo);
    printf("TRAPEZIO: %.3lf\n", area_trapezio);
    printf("QUADRADO: %.3lf\n", area_quadrado);
    printf("RETANGULO: %.3lf\n", area_retangulo);

    return 0;
}