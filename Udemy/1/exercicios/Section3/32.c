//Ex32
/*
Leia número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seudobro.
*/

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    int sucessor, antecessor;
    sucessor = numero * 3 + 1;
    antecessor = numero * 2 - 1;

    int soma = sucessor + antecessor;
    printf("A soma do sucessor de seu triplo com o antecessor do seu dobro e: ");
    printf("%d", soma);
}