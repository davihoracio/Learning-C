#include <stdio.h>
#include <stdlib.h> 

int main() {
    int A = 0, B = 0, C = 0, maiorAB = 0, maior = 0;

    scanf("%d %d %d", &A, &B,&C);

    maiorAB = (A + B + abs(A - B))/2;
    maior = (maiorAB + C + abs(maiorAB - C))/2;

    printf("%d eh o maior\n", maior);

    return 0;
}
