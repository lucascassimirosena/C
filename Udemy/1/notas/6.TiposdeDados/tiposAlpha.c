/*

************ TIPOS ALFA NUMÉRICOS*******
- Characteres;
- Strings*

* Na linguagem C, não existe o tipo de dado String.
"ASFLASJFKLSJDDFLSAJ" - String
'c' - Caractere

*/

#include <stdio.h>

int main()
{
  /*  char opcao;

    printf("Informe uma opcaoo: \n");
    printf("a - Saldo da conta. \n");
    printf("b - Extrato da conta. \n");
    printf("c - Limite da conta. \n");

    scanf("%d", &opcao);

    if(opcao == 'a')
    {
        printf("Seu saldo e de: ");
    }
    else if(opcao == 'b')
    {
        printf("Etrato da conta...");
    }
    else if (opcao == 'c')
    {
        printf("Seu limite e...");
    }
    else
    {
        printf("Opcao desconhecida");
    }
*/

    //Declaração de uma string em C
    char nome[50];

    printf("Qual e o seu nome? ");
    gets(nome);  //para receber uma string nós usamos gets

    printf("Seu nome e %s", nome);
    return (0);
}