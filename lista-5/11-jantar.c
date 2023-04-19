#include <stdio.h>

int main() {
    int n, k, horas;
    scanf("%d %d", &n, &k);
    horas = n;
    while (n >= k) {
        horas++;
        n -= k;
        n++;
    }
    printf("%d\n", horas);
    return 0;
}
