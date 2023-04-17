#include <stdio.h>

int main(void) {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("O primeiro valor e maior.");
    } else {
        printf("O primeiro valor nao e maior.");
    }

    return 0;
}