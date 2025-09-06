#include <stdio.h>

int main() {
    int p, n, i, atual, anterior;
    scanf("%d %d", &p, &n);
    scanf("%d", &anterior);
    int ok = 1;
    for (i = 1; i < n; i++) {
        scanf("%d", &atual);
        if (abs(atual - anterior) > p) ok = 0;
        anterior = atual;
    }
    if (ok) printf("YOU WIN\n");
    else printf("GAME OVER\n");
    return 0;
}
