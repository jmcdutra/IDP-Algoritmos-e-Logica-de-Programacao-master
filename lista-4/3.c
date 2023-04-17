#include <stdio.h>

int main(void) {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d %d", (a > b ? b : a), (a > b ? a : b));

    if (a > b) {}

    return 0;
}