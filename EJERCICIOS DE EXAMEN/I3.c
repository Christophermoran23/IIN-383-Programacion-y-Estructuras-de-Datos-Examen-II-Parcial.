// Nombre: [Christopher Aslen Moran Bustillo]
// Cuenta: [202400260]

#include <stdio.h>

int main(void) {

int numero, i, factorial;


do {
        printf("Ingrese un entero no negativo: ");
        scanf("%d", &numero);
} while (numero < 0);


factorial = 1;

for (i = 1; i <= numero; i++) {
factorial = factorial * i;
}

if (numero == 0) {
printf("0! = 1\n");
} else {
printf("%d! = %d\n", numero, factorial);
}

return 0;
}