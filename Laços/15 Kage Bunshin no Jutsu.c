#include <stdio.h>
#include <math.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int ans = (int)(log2(n));
        printf("%d\n", ans);
    }
    return 0;
}
