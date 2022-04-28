//Ex14
/*
A nota final de um estudante é caluclada a partir de três notas atribuidas entre o 
interval de 0 a 10, respectivamente, a um trabalho de laboratório, a avaliação
semestral e a um exame final. A média das três notas mencionadas anteriormente
obedece aos pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame final: 5.
De acordo com o resultado, mostre na tela se o aluno está reptocado (média entre 0 e 2,9),
de recupração (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.
*/

#include <stdio.h>

int main()
{
    int nota1, nota2, nota3;
    int nLab, sem, exam;

    printf("Digite a nota: ");
    scanf("%d", &nota1);
        if(nota1 <= 2)
        {
            nLab = nota1;
        }
        else
        {
        printf("Nota invalida.\n");
        }

    printf("Digite a nota: ");
    scanf("%d", &nota2);
        if(nota2 <= 3)
        {
            sem = nota2;
        }
        else
        {
            printf("Nota invalida.\n");
        }

    printf("Digite a nota: ");
    scanf("%d", &nota3);
        if(nota3 <= 5)
        {
            exam = nota3;
        }
        else
        {
            printf("Nota Invalida");
        }

        float sum;
        sum = nLab + sem + exam;
        if(sum >= 0 && sum <= 2.9)
        {
            printf("Voce esta reprovado.");
        }
        else if(sum >= 3 && sum <= 4.9)
        {
            printf("Voce esta de recuperacao.");
        }
        else
        {
            printf("Aprovado.");
        }
    


}

