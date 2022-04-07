#include <stdio.h>
//vetores
// array uni-dimensional
// char nome[50]
int main()
{
    //vetores e strings    
    char nome[50];
    printf("Qual seu nome? ");
    gets(nome);
    printf("Olá %s", nome);

    //vetores e caracteres
    char letras[26];
    int contador = 0;
    for(int i = 97; i <= 122; i++)
    {
        letras[contador] = i;
        contador = contador + 1;
    }
    //imprimindo as letras e seus valores em decimal
    for(int i = 0; i < 26; i++)
    {
        printf("%d == %c\n", letras[i], letras[i]);
    }

    //vetores de inteiros
    int numeros[10];

    //vetores e reais
    float valores[5];


    return 0;
}