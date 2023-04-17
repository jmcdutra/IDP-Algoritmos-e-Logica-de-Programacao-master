#include <stdio.h>

int main() {
  double n = 0;
  int quantidadeNotas = 0;
  double operacao = 0;

  while (n != -1) {
    scanf("%lf", &n);
    if (n != -1) {
      quantidadeNotas = quantidadeNotas + 1;
      operacao = operacao + n;
    }
  };

  operacao = (operacao / quantidadeNotas);

  printf("%.2lf", operacao);

  return 0;
}
