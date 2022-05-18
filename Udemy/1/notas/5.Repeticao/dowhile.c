// Estrutura de Repetição
/*
Do ... While (Faça... enquanto)

Uitlizado quando você precisa de um loop onde não se tenha um número
fixo de elementos mas que tenha um critério de parada e a condição de
parada é checada após a primeira execução.

Problema:
Fça um programa, no qual receba e some números inteiros até que o número
de entrada seja 0 e apresente a soma no final;
*/

int main()
{
    int numero, soma = 0;

     printf("Informe um numero: ");
    scanf("%d", &numero);

    do
    {
       //Entrada
       printf("Informe um numero: ");
       scanf("%d", &numero);

       soma = soma + numero;

    } 
    while (numero < 10);
    
    printf("A soma e %d", soma);

    return 0;
} 


