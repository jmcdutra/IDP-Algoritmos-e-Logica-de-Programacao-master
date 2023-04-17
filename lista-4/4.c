#include <stdio.h>

int main(void) {
    double n1, n2, n3, result;

    scanf("%lf;%lf;%lf", &n1, &n2, &n3);

    result = (n1 + n2 + n3) / 3;

    printf("Media das notas: %.2lf", result);

    if (result < 6) { printf("\nAluno Reprovado."); }

    return 0;
}