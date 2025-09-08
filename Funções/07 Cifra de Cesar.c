#include <stdio.h>
#include <string.h>

// Protótipos das funções
char decodificar_letra(char c, int desloc);
void decodificar_string(char frase[], int desloc);

int main() {
    int n, desloc;
    char frase[51]; // até 50 caracteres + '\0'

    scanf("%d", &n);

    while (n--) {
        scanf("%s", frase);   // lê a string codificada
        scanf("%d", &desloc); // lê o deslocamento

        decodificar_string(frase, desloc);

        printf("%s\n", frase);
    }

    return 0;
}

// Implementação das funções
char decodificar_letra(char c, int desloc) {
    return ((c - 'A' - desloc + 26) % 26) + 'A';
}

void decodificar_string(char frase[], int desloc) {
    int i;
    for (i = 0; frase[i] != '\0'; i++) {
        frase[i] = decodificar_letra(frase[i], desloc);
    }
}
