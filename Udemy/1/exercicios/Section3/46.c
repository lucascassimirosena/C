//Ex46
/*
Faça um programa que leia um número inteiro positivo de três
dígitos (de 100 a 999). Gere outro número formado pelos dígitos
invertidos do número lido. Exemplo:

NúmeroLido = 123
NúmeroGerado = 321

*/

#include <stdio.h>

int main()
{

    int value;
    int unidade, dezena, centena, invertido;

 
    printf("Digite um numero de 100 a 999: ");
    scanf("%d", &value);

    if(value >= 100 <= 999)
    {
        unidade = value % 10;
        dezena = (value % 100) / 10;
        centena = value / 10;

        invertido = unidade * 100 + dezena * 100 + centena;
    }
    else
    { 
        printf("Invalido");
    }
    printf("O valor desse numero, invertido e: %d", invertido);


    
}

//Terminar
// Terminar 36

/*
Artigo que encontrei sobre inversão de números:
https://wagnergaspar.com/duvida-como-inverter-um-numero-com-a-linguagem-portugol/#:~:text=Observe%20que%20inverter%20um%20n%C3%BAmero,obtemos%20o%20n%C3%BAmero%20original%20invertido.
*/

