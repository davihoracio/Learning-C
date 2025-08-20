#include <stdio.h>

int main() {
    int num_funcionario = 0, horas_trabalhadas = 0;
    double salario_por_hora = 0, salario = 0;

    scanf("%d", &num_funcionario);
    scanf("%d", &horas_trabalhadas);
    scanf("%lf", &salario_por_hora);

    salario = horas_trabalhadas * salario_por_hora;

    printf("NUMBER = %d\n", num_funcionario);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}