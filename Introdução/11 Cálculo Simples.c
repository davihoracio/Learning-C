#include <stdio.h>

int main(){
    double codigo1 = 0, codigo2 = 0, numero1 = 0, numero2 = 0, valor1 = 0, valor2 = 0, total = 0;
    
    scanf("%lf %lf %lf", &codigo1, &numero1, &valor1);
    scanf("%lf %lf %lf", &codigo2, &numero2, &valor2);

    total = (numero1 * valor1) + (numero2 * valor2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}