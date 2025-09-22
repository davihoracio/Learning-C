#include <stdio.h>

int main() {
    int par[5];
    int impar[5];

    int contador_par = 0;
    int contador_impar = 0;

    int numero_lido;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &numero_lido);

        if (numero_lido % 2 == 0) {
            par[contador_par] = numero_lido;
            contador_par++;
        } else {
            impar[contador_impar] = numero_lido;
            contador_impar++;
        }

        if (contador_par == 5) {
            for (int j = 0; j < 5; j++) {
                printf("par[%d] = %d\n", j, par[j]);
            }
            contador_par = 0;
        }

        if (contador_impar == 5) {
            for (int j = 0; j < 5; j++) {
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            contador_impar = 0;
        }
    }

    for (int i = 0; i < contador_impar; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for (int i = 0; i < contador_par; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}