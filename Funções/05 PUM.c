#include <stdio.h>

void matriz(int linhas);

int main(){
    int linhas_entrada;

    scanf("%d", &linhas_entrada);

    matriz(linhas_entrada);

    return 0;
}

void matriz(int linhas){

    int j = 1;
    
    for(int i = 1; i <= linhas; i++){
        printf("%d %d %d PUM\n", j, j+1, j+2);
        j +=4;
    }
}
