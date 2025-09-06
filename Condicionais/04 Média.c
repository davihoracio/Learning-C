#include <stdio.h>

int main(){
    // Declarar variáveis
    double nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0, nota_exame = 0, media = 0;

    //Ler as notas do aluno
    scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);

    // Calcular a média e printar
    media = (nota1*2 + nota2*3 + nota3*4 + nota4)/10;
    printf("Media: %.1lf\n", media);

    // Verificar situação do aluno
    if(media >= 7.0) printf("Aluno aprovado.\n");

    //Aluno em exame
    else if(media>= 5 && media <7){
        printf("Aluno em exame.\n");
        scanf("%lf", &nota_exame); //Ler a nota do exame
        printf("Nota do exame: %.1lf\n", nota_exame); // Printa a nota do exame
        media = (media + nota_exame)/2; //Recalcular a media
        if(media >= 5) printf("Aluno aprovado.\n"); 
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", media);
    }

    // Aluno reprovado
    else printf("Aluno reprovado.\n");

    return 0;    
}