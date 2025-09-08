#include <stdio.h>

void aumento_salario(double salario, int aumento);

int main(){
    double entrada_salario;

    scanf("%lf", &entrada_salario);

    if(entrada_salario <= 400) aumento_salario(entrada_salario, 15);
    else if(entrada_salario<= 800) aumento_salario(entrada_salario, 12);
    else if(entrada_salario<= 1200) aumento_salario(entrada_salario, 10);
    else if(entrada_salario<= 2000) aumento_salario(entrada_salario, 7);
    else if(entrada_salario> 2000) aumento_salario(entrada_salario, 4);
    
    return 0;
}

void aumento_salario(double salario, int aumento){
    double novo_salario, reajuste;
    int percentual;

    novo_salario = salario + (salario * (aumento/100.0));

    reajuste = novo_salario - salario;

    percentual = aumento;

    printf("Novo salario: %.2lf\n", novo_salario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);
}