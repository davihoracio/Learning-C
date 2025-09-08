#include <stdio.h>

// Protótipo
int diferenca_pressao(int desejada, int lida);

int main() {
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);

    printf("%d\n", diferenca_pressao(N, M));

    return 0;
}

// Implementação
int diferenca_pressao(int desejada, int lida) {
    return desejada - lida;
}
