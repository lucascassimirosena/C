#include <stdio.h>


int main()
{
    //Vetores e strings
    char nome[50];
    // sting é qualquer coisa entre " ". como: "Informaticien"
    printf("Qual seu nome? ");
    gets(nome);
    printf("Ola %s", nome);

    //vetores e caracteres
    char letras[26];
    // caracteres são qualquer coisa dentro de aspas simples como 'b' 'c' 'd' '1' ...
    int contador = 0;
    for(int i = 97; i <- 122; i++) 
    {
        letras[contador] = i;
        contador = contador + 1;
    }


    //vetores de inteiros
    int numeros[10];

    //vetores e reais
    float valores[5];

    //imprimindo as letras e seus valores em decimal
    for (int i = 0; i < 26; i++)
    {
        printf("%d == %c\n", letras[i], letras[i]);
    }



    return 0;
}