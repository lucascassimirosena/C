/* Esta aula é sobre variáveis e parte do curso Programação em C do básico ao avançado
do Udemy */

#include <stdio.h>
/* com o código acima "include" eu incluo uma biblioteca no programa,
neste caso é a biblioteca padrão de entrada e saída (input e output),
por isso o "io". stdio portanto significa "STANDARD INPUT OUTPUT"*/

int main(){                //a chave delimita blocos de códigos.
//em C o ";" finaliza um comando.

    //Declarando variáveis
    int idade; //inteiro

    //inicializando variáveis
    //idade = 0;

    //Função para escrever algo na saída padrão:       //
    printf("Quantos anos voce tem? ");

    //Receber dados
    scanf("%d", &idade);     //o conteúdo entre parenteses são parâmetros
    

    //Saída
    printf("A sua idade é %d", idade);

    return 0;
} //fim do bloco