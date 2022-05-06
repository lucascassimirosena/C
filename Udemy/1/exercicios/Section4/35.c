//Ex35
/*
Leia uma data e determine se ela é valida. Ou seja, verifique se o mês está
entre 1 e 12, e se o dia existe naquele mês. Note que Feveriro tem 29 dias
em anos bissextos, e 28 em anos não bissextos.
*/

#include <stdio.h>

int main()
{

    int year, month, day;

    printf("Digite o dia: ");
    scanf ("%d", &day);
    printf("Digite o mes: ");
    scanf ("%d", &month);
    printf("Digite o ano: ");
    scanf ("%d", &year);

        switch(month)
        {
            case 1:
            {
                if(day <= 31)
                {
                printf("Data valida");
                }
                else
                {
                    printf("Data invalida");
                }
                break;
            }
            case 2:
            {
                if((!(year % 400 == 0 || year % 4 == 0 && (year % 100 == 0))) && day <= 28)
                {
                    printf("Data valida");
                }
                else
                {
                    printf("Data invalida");
                }
                break;
            }

            case 3:
            {
                if(day <= 31)
                {
                printf("Data valida");
                }
                else
                {
                    printf("Data invalida");
                }
                break;
            }

            case 4:
            {
                if(day <= 30)
                {
                printf("Data valida");
                }
                else
                {
                    printf("Data invalida");
                }
                break;
            }

            case 5:
            {
                if(day <= 31)
                {
                printf("Data valida");
                }
                else
                {
                    printf("Data invalida");
                }
                break;
            }

            case 6:
            {
                if(day <= 30)
                {
                printf("Data valida");
                }
                else
                {
                    printf("Data invalida");
                }
                break;
            }

            case 7:
            {
                if(day <= 31)
                {
                printf("Data valida");
                }
                else
                {
                    printf("Data invalida");
                }
                break;
            }

            case 8:
            {
                if(day <= 31)
                {
                printf("Data valida");
                }
                else
                {
                    printf("Data invalida");
                }
                break;
            }

            case 9:
            {
                if(day <= 30)
                {
                printf("Data valida");
                }
                else
                {
                    printf("Data invalida");
                }
                break;
            }

            case 10:
            {
                if(day <= 31)
                {
                printf("Data valida");
                }
                else
                {
                    printf("Data invalida");
                }
                break;
            }

            case 11:
            {
                if(day <= 30)
                {
                printf("Data valida");
                }
                else
                {
                    printf("Data invalida");
                }
                break;
            }

            case 12:
            {
                if(day <= 31)
                {
                printf("Data valida");
                }
                else
                {
                    printf("Data invalida");
                }
                break;
            }
        }

}