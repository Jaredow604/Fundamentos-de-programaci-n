#include <stdio.h>

int main() {
    int a, b;

    printf("Tabla de verdad de AND\n");
    printf("a\tb\ta AND b\n");
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("%d\t%d\t%d\n", a, b, a && b);
        }
    }

    printf("\nTabla de verdad de OR\n");
    printf("a\tb\ta OR b\n");
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("%d\t%d\t%d\n", a, b, a || b);
        }
    }

    printf("\nTabla de verdad de NOT\n");
    printf("a\tnot a\n");
    for (a = 0; a <= 1; a++) {
        printf("%d\t%d\n", a, !a);
    }

    return 0;
}