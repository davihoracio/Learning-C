#include <stdio.h>

int main(){
    int codigo=0, quantidade=0;
    double total=0;

    scanf("%d %d", &codigo, &quantidade);

    switch (codigo)
    {
    case 1: total = 4.00*quantidade; break;
    case 2: total = 4.5*quantidade; break;
    case 3: total = 5*quantidade; break;
    case 4: total = 2 * quantidade; break;
    case 5: total = 1.5*quantidade; break;
    }

    printf("Total: R$ %.2lf\n", total);

    return 0;
}