#include <stdio.h>

int main() {
    float x, soma = 0.0;
    int i, count = 0;
    for (i = 0; i < 6; i++) {
        scanf("%f", &x);
        if (x > 0) {
            soma += x;
            count++;
        }
    }
    printf("%d valores positivos\n", count);
    if (count > 0) printf("%.1f\n", soma / count);
    return 0;
}
