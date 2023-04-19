#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("pares: ");
    for (int i = 2; i <= n; i += 2) { 
        printf("%d ", i);
    }
    printf("\nimpares: ");
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}