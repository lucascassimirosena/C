

#include <stdio.h>

void incrementa(int* contador)
{
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", valor);
    

    printf("Depois de incrementar. \n");
    printf("O contador vale %d", ++valor);
}

int main()
{   /* Quando declaramos uma variável, a linguagem C aloca
    um espaço na memória para colocar este valor */
    int contador = 10;

    printf("Antes de incrementar. \n");
    printf("O contador vale %d\n", contador);
    printf("O endereco de memoria e %d\n", &contador);

    incrementa(contador);

    printf(" Depois de incrementar. \n");
    printf("O contador vale %d", contador);
}