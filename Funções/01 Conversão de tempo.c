#include <stdio.h>

//Protótipo da função
void div60(int a);

int main(){
    int segundo_entrada = 0;

    scanf("%d", &segundo_entrada);

    div60(segundo_entrada);

}

void div60(int a){
    int segundos, minutos, horas, resto;

    horas = a/3600;
    minutos = (a%3600)/ 60;
    segundos = a%60;

    printf("%d:%d:%d\n", horas, minutos, segundos);    
}