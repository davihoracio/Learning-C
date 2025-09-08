#include <stdio.h>

// Protótipo da função
void decimal_para_hexadecimal(unsigned int v);

int main() {
    unsigned int v;
    scanf("%u", &v);
    decimal_para_hexadecimal(v);
    return 0;
}

// Implementação da função
void decimal_para_hexadecimal(unsigned int v) {
    printf("%X\n", v);
}
