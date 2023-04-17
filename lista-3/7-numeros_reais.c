#include <stdio.h>

int main() {
    float f1, f2;
    double d1, d2;

    scanf("%f %f", &f1, &f2);
    scanf("%lf %lf", &d1, &d2);

    printf("F1 = %f, F2 = %f\n", f1, f2);
    printf("D1 = %lf, D2 = %lf\n", d1, d2);
    printf("\n");
    printf("F1 = %.2f, F2 = %.2f\n", f1, f2);
    printf("D1 = %.2lf, D2 = %.2lf\n", d1, d2);
    printf("\n");
    printf("F1 = %.5f, F2 = %.5f\n", f1, f2);
    printf("D1 = %.5lf, D2 = %.5lf\n", d1, d2);
    printf("\n");
    printf("F1 = %.10f, F2 = %.10f\n", f1, f2);
    printf("D1 = %.10lf, D2 = %.10lf\n", d1, d2);
    printf("\n");
    printf("F1 = %.3e, F2 = %.3e\n", f1, f2);
    printf("D1 = %.3e, D2 = %.3e\n", d1, d2);
    printf("\n");
    printf("F1 = %.0lf, F2 = %.0lf\n", f1, f2);
    printf("D1 = %.0lf, D2 = %.0lf\n", d1, d2);

    return 0;
}