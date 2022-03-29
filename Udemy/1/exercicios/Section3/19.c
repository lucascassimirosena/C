//Ex19
/*
Leia um valor de volume em litros e apresente-o convertido
em metros cubicos em m3. A formula de conversao e: M = L/1000,
sendo L o volume em litros e M o volume em metros cubicos.
*/

int main()
{
    float litros;
    printf("Digite quantos litros: ");
    scanf("%f", &litros);

    float cubicos;
    cubicos = litros/1000;
    printf("O valor em metros cubicos e: ");
    printf("%f", cubicos);

}