#include <stdio.h>

int main(void) {
    double a, b, c;
    double operation;

    scanf("%lf %lf %lf", &a, &b, &c);
    operation = b * b - 4 * a * c;

    if (operation >= 0) {
        printf("reais");
    } else {
        printf("complexas");
    }

    return 0;
}