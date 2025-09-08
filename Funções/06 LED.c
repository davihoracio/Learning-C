#include <stdio.h>
#include <string.h>

int contar_leds(char numero_leds[]);

int main() {
    int entrada_leds;          // quantidade de casos de teste
    char numero[102];          // até 101 dígitos + '\0'

    scanf("%d", &entrada_leds);

    for (int j = 0; j < entrada_leds; j++) {
        scanf("%s", numero);   // lê o número como string
        int resultado = contar_leds(numero);
        printf("%d leds\n", resultado);
    }

    return 0;
}

int contar_leds(char numero_leds[]) {
    int total = 0;

    for (int i = 0; i < strlen(numero_leds); i++) {
        switch (numero_leds[i]) {
            case '0': total += 6; break;
            case '1': total += 2; break;
            case '2': total += 5; break;
            case '3': total += 5; break;
            case '4': total += 4; break;
            case '5': total += 5; break;
            case '6': total += 6; break;
            case '7': total += 3; break;
            case '8': total += 7; break;
            case '9': total += 6; break;
        }
    }

    return total;
}
