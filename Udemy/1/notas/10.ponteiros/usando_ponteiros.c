//Usando ponteiros
//Ao trabalhar com ponteiors estamos trabalhando com o mais baixo nível da linguagem.
#include <stdio.h>

int main()
{
    int n; // varíável que gaurda seu valor na memória.

    //declarando o ponteiro
    int* p; //ponteiro é um valor que aponda para m enderço de memória

    printf("Informe um numero: ");
    scanf("%d", &n);

    //inicializando o ponteiro
    p = &n; 
    printf("O numero informado foi %d\n", n);
    
    printf("Endereco de memoria: %d\n", &n);

    printf("Endereco do ponteiro: %p", p);
    return (0);
}