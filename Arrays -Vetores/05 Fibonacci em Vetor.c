#include <stdio.h>

int main() {
    int T; 
    int N; 
    int i; 

    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        scanf("%d", &N);


        unsigned long long anterior = 0;
        unsigned long long atual = 1;
        unsigned long long proximo;

        // Caso especial: Fib(0)
        if (N == 0) {
            printf("Fib(%d) = %llu\n", N, anterior);
        }
        else if (N == 1) {
            printf("Fib(%d) = %llu\n", N, atual);
        }
        else {
            for (int j = 2; j <= N; j++) {
                proximo = anterior + atual; 
                anterior = atual;           
                atual = proximo;            
            }
            printf("Fib(%d) = %llu\n", N, atual);
        }
    }

    return 0;
}