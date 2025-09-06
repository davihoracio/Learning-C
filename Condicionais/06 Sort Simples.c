#include <stdio.h>

int main(){
    int n1, n2, n3, maior, meio, menor;

    //Ler os números
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1>=n2 && n1>=n3){
        maior = n1;
        if(n2>=n3){
            meio = n2;
            menor = n3;
        }
        else{
            meio = n3;
            menor = n2;
        }
    }
    else if(n2>=n1 && n2>=n3){
        maior = n2;
        if(n1>=n3){
            meio = n1;
            menor = n3;
        }
        else{
            meio = n3;
            menor = n1;
        }
    }
    else{
        maior = n3;
        if(n2>=n1){
            meio = n2;
            menor = n1;
        }
        else{
        meio = n1;
        menor = n2;
        }
    }   
    // 1. Imprime em ordem crescente
    printf("%d\n", menor);
    printf("%d\n", meio);
    printf("%d\n", maior);

    // 2. Imprime a linha em branco
    printf("\n");

    // 3. Imprime na ordem original
    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);

    return 0;
}