#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int n, f1, f2;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &f1, &f2);
        printf("%d\n", mdc(f1, f2));
    }
    return 0;
}
