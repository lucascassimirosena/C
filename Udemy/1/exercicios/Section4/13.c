//Ex13
/*
Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira
e a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média
do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação
deve ser igual ou superior a 60 pontos.
*/

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, ponderada;
    int peso1, peso2;

    peso1 = 2;
    peso2 = 8;
    printf("Digite a nota da prova 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota da prova 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota da prova 3: ");
    scanf("%f", &nota3);

    ponderada = peso1 * nota1 + peso1 * nota2 + peso2 + nota3 / peso1 + peso2;
    printf("A nota e: %f", ponderada);

    if(ponderada >= 60)
    {
        printf(" e voce esta aprovado.");
    }
    else
        printf(" e voce esta reprovado.");
}