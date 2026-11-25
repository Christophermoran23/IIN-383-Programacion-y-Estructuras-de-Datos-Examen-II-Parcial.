 // Nombre: [Christopher Aslen Moran Bustillo]
// numero de cuenta: [202400260]

#include <stdio.h>

int main(void) {
int n, i, pares = 0;

do {
printf("Ingrese un numero entre 1 y 10: ");
scanf("%d", &n);
} while (n < 1 || n > 10);


for (i = 1; i <= n; i++) {
  
if (i % 2 == 0) {
            pares++;
}
}

if (pares < 2 || pares > 3) {
printf("Cantidad fuera de rango\n");
} else {
printf("Pares: %d\n", pares);
}

    return 0;
}