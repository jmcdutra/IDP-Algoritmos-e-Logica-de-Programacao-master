#include <stdio.h>

int main(void) {
    int a, b, bigger, smaller;

    scanf("%d %d", &a, &b);

    bigger = (a > b ? a : b);
    smaller = (a < b ? a : b);

    printf("%d\n%d\n%s", bigger, smaller, a == b ? "iguais" : "diferentes");

    return 0;
}