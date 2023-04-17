#include <stdio.h>
#include <math.h>

int main() {
    double x1, x2, f;
    scanf("%lf %lf", &x1, &x2);
    f = 100 * pow(x2-x1, 2) + sqrt(x1 + x2);
    printf("%.3lf\n", f);
    return 0;
}