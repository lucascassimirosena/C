//Ex25
/*
Equação de segundo grau.
*/


#include <stdio.h>
#include <math.h>

int main() 
{

  float a,b,c,x1,x2,d;

  
  printf("Digite o valor de a:\n");
  scanf("%f", &a);
  
  printf("Digite o valor de b:\n");
  scanf("%f", &b);
  
  printf("Digite o valor de c:\n");
  scanf("%f", &c);

  if (a == 0) {
    if (b != 0) {  
      x1 = -c/b;
      printf("A equacao eh de primeiro grau e a raiz eh: %f\n", x1);
    }
    else {
      if (c == 0) {
	printf("Parabens! 0 = 0!\n");
      }
      else {
	printf("Voce cometeu uma contradicao\n");
      }
    }
  }
  else {
    
    d = b*b - 4*a*c;

    if (d < 0) {
      printf("Nao existe solucao real :(\n");
    }
    else {
      x1 = (-b + sqrt(d))/(2*a);
      x2 = (-b - sqrt(d))/(2*a);

      if (fabs(d) < 1.0e-10) {
	printf("Existe uma raiz %f de multiplicidade 2\n", x1);
      }
      else {
	printf("As raizes sao %f e %f\n", x1, x2);
      }
    }
  }
  
  return(0);
}

//RESOLVER