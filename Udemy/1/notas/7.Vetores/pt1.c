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
    printf("Ola %s", nome);

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
    int numeros[5];
    numeros[0] = 1;
    numeros[1] = 3;
    numeros[2] = 5;
    numeros[3] = 7;
    numeros[4] = 9;
  
    //vetores e reais
    float valores[5];
    for(int i = 0; i < 5; i++)
    {
        valores[i] = (float)numeros[i] / (float)2;
    }

    for(int i = 4; i >= 0; i--)
    {
        printf("%.2f\n", valores[i]);
    }


    return 0;
}