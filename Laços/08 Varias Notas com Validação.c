#include <stdio.h>

int main() {
    double nota, soma;
    int count, opcao;
    do {
        soma = 0; count = 0;
        while (count < 2) {
            scanf("%lf", &nota);
            if (nota >= 0.0 && nota <= 10.0) {
                soma += nota;
                count++;
            } else {
                printf("nota invalida\n");
            }
        }
        printf("media = %.2f\n", soma / 2.0);
        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opcao);
        } while (opcao != 1 && opcao != 2);
    } while (opcao == 1);
    return 0;
}
