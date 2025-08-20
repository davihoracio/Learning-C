#include <stdio.h>
#include <math.h>

int main() {
    double raio = 0, volume = 0;
    const double pi = 3.14159;

    scanf("%lf", &raio);

    volume = (4.0/3.0) * pi * pow(raio, 3);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
