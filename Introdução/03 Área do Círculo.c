#include <stdio.h>

int main(){
    double area = 0, raio = 0, n = 3.14159;
    scanf("%lf", &raio);
    area = n * (raio*raio);
    printf("A=%.4lf\n", area);
}