#include <stdio.h>

int main() {
    int n, i, a = 0, b = 1, c;
    scanf("%d", &n);
    printf("0 ");
    for (i = 1; i < n; i++) {
        if (i == 1) {
            printf("1 ");
            continue;
        }
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }
    return 0;
}
