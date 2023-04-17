#include <stdio.h>

/* Função que verifica se um número é primo */
int checkPrime(int num) {
  /* Verifica se o número é menor ou igual a 1, que não são primos */
  if (num <= 1) {
    return 0; // Retorna falso (0) para números menores ou iguais a 1
  }

  /* Verifica se o número é divisível por algum inteiro de 2 até a sua raiz quadrada */
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return 0; // Retorna falso (0) se o número for divisível por algum inteiro
    }
  }

  return 1; // Retorna verdadeiro (1) se o número for primo
}

int main() {
  int op = 0;
  int opflag = 0;

  scanf("%d", &opflag);
  int numbers[1][opflag];

  while (op != opflag) { /* Coleta os números */
    int n;
    scanf("%d", &n);
    numbers[0][op] = n;
    op = op + 1;
  };

  for (int i = 0; i < opflag; i++) { /* Verifica se os números coletados são primos */
    int number = numbers[0][i];
    int check = checkPrime(number);
    if (check == 1) {
      printf("%d e primo\n", number);
    } else {
      printf("%d nao e primo\n", number);
    }
  }

  return 0;
}
