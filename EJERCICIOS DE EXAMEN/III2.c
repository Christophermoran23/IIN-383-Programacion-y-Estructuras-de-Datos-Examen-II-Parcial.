// Nombre: [Tu nombre]
// Cuenta: [Tu número de cuenta]

#include <stdio.h>

int main(void) {
    int n, i;

    do {
        printf("Ingrese un numero entre 1 y 12: ");
        scanf("%d", &n);
    } while (n < 1 || n > 12);

    printf("Tabla de multiplicar del %d:\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}