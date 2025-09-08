#include <stdio.h>

int decompor_valor(int valor_total, int valor_nota);

int main(){
    double valor;
    int resto =0;

    scanf("%lf", &valor);
    int total_centavos = (int)((valor * 100.0) + 0.5);
    
    printf("NOTAS:\n");

    resto = decompor_valor(total_centavos, 10000);
    resto = decompor_valor(resto, 5000);
    resto = decompor_valor(resto, 2000);
    resto = decompor_valor(resto, 1000);
    resto = decompor_valor(resto, 500);
    resto = decompor_valor(resto, 200);

    printf("MOEDAS:\n");

    resto = decompor_valor(resto, 100);
    resto = decompor_valor(resto, 50);
    resto = decompor_valor(resto, 25);
    resto = decompor_valor(resto, 10);
    resto = decompor_valor(resto, 5);
    resto = decompor_valor(resto, 1);
}

int decompor_valor(int valor_total, int valor_nota){
    int quantidade_notas = 0, resto = 0;

    quantidade_notas = valor_total / valor_nota;

    resto = valor_total % valor_nota;

    double valor_print = (double)valor_nota / 100.0;


     if (valor_nota >= 200) { // De R$ 2.00 (200 centavos) para cima, é NOTA
        printf("%d nota(s) de R$ %.2f\n", quantidade_notas, valor_print);
    } else { // Abaixo disso, é MOEDA
        printf("%d moeda(s) de R$ %.2f\n", quantidade_notas, valor_print);
    }

    return resto;
}