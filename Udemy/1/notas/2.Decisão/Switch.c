//Switch
/*
Usamos o switch em casos onde tenhamos uma estrutura grande ou confusa de
if/else/if else.


# Pseudocódigo:
Escolha (Variável)
Inicio
    Caso valor1:
        Instruções
    Caso valor2:
        Instruções
    ..
Fim

# Na linguagem C

switch(variavel)
{
    caso valor1:
        instruções;
        brea;
    caso valor2:
        instruções;
        break;
    default:
        instruções;
    
}
*/

# include <stdio.h>

int main()
{
    int valor;

    printf("Digite um valor de 1 a 7: ");
    scanf("%d", &valor);

    switch(valor)
    {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda\n");
            break;
        case 3:
            printf("Terca\n");
            break;
        case 4:
            printf("Quarta\n");
            break;
        case 5:
            printf("Quinta\n");
            break;
        case 6:
            printf("Sexta\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Valor invalido");
    }
}