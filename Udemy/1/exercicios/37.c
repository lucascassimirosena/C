//Ex37
/*
Faça um programa que leia o valor de um produto e imprima
o valor com desconto, tendo em vista que o desconto foi de
12%.
*/

int main()
{
    float produto;
    printf("Valor do produto: ");
    scanf("%f", &produto);

    float desconto;
    desconto = produto * 0.12;

    printf("Valor do desconto: ");
    printf("%f", desconto);
}