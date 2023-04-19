#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    int num, menor, maior;

    scanf("%d", &num);
    menor = maior = num; /* Reação encadeada */

    for (int i = 2; i <= n; i++) {
        scanf("%d", &num);
        if (num < menor) {
            menor = num;
        }

        if (num > maior) {
            maior = num;
        }        
    }

    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);

    return 0;
}