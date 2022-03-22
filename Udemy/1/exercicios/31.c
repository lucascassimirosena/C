//Ex31
/*
Leia umnumero inteiro e imprima seu antecessor e seu sucessor.
*/

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    int antecessor;
    int sucessor;

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("Anteessor: ");
    printf("%d", antecessor);
    printf(" Sucessor: ");
    printf("%d", sucessor);
}