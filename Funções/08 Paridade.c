#include <stdio.h>
#include <string.h>

// Protótipos
int contar_uns(char s[]);
void adicionar_bit_paridade(char s[]);

int main() {
    char s[105]; // até 100 bits + '\0' + bit extra
    
    while (scanf("%s", s) != EOF) {
        adicionar_bit_paridade(s);
    }

    return 0;
}

// Conta quantos '1's existem na string
int contar_uns(char s[]) {
    int i, cont = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '1')
            cont++;
    }
    return cont;
}

// Adiciona o bit de paridade e imprime
void adicionar_bit_paridade(char s[]) {
    int qtd_uns = contar_uns(s);
    if (qtd_uns % 2 == 0) {
        printf("%s0\n", s);
    } else {
        printf("%s1\n", s);
    }
}
