#include <stdio.h>

int main(void) {
    int a, b;
    char operation;
    char result[100]; /* LEMBRETE: verificar como criar strings (*, [100]) */

    scanf("%d%c%d", &a, &operation, &b);

    if (operation == '+') {
        sprintf(result, "%d + %d = %d", a, b, a + b);
    } else if (operation == '-') {
        sprintf(result, "%d - %d = %d", a, b, a - b);
    } else {
        sprintf(result, "Operador não reconhecido."); /* LEMBRETE: pq não dá pra definir como result = "..."? */
    }

    printf("%s", result);

    return 0;
}