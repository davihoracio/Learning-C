#include <stdio.h>

int main() {
    int t, n;
    while (1) {
        scanf("%d", &t);
        if (t == 0) break;
        while (t--) {
            scanf("%d", &n);
            if (n % 2 == 0) printf("%d\n", (2 * n) - 2);
            else printf("%d\n", (2 * n) - 1);
        }
    }
    return 0;
}
