//Ex34
/*
Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo
com a tabela abaixo, quando o aluno tem mais de 20 falta ocorre uma redução do conceito.

Nota            Conceito (Até 20 faltas)        Conceito (Mais de 20 faltas)

9.0 até 10.0            A                               B
7.5 até 8.9             B                               C
5.0 até 7.4             C                               D  
4.0 até 4.9             D                               E
0.0 até 3.9             E                               E
*/

#include <stdio.h>


int main()
{
    float grade;
    int abs;
    printf("Digite a nota: ");
    scanf("%f", &grade);
    printf("Digite o numero de faltas: ");
    scanf("%d", &abs);

    if(abs <= 20)
        {
            if (grade >= 9 && grade <= 10)
            {
                printf("A");
            }
            else if(grade >= 7.5 && grade <= 8.9)
            {
                printf("B");
            }
            else if(grade >= 5.0 && grade <= 7.4)
            {
                printf("C");
            }
            else if(grade >= 4.0 && grade <= 4.9)
            {
                printf("D");
            }
            else if(grade >= 0.0 && grade <= 3.9)
            {
                printf("E");
            }
            
        }

    if(abs > 20)
    {
        if (grade >= 9 && grade <= 10)
        {
            printf("B");
        }
        else if(grade >= 7.5 && grade <= 8.9)
        {
            printf("C");
        }
        else if(grade >= 5 && grade <= 7.4)
        {
            printf("D");
        }
        else if(grade >= 4 && grade <= 4.9)
        {
            printf("E");
        }
        else if(grade >= 0 && grade <= 3.9)
        {
            printf("E");
        }
    }

}
