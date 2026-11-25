// Nombre: [Christopher Aslen Moran Bustillo]
// Cuenta: [202400260]

#include <stdio.h>

int main(void) {
int n, suma = 0, cantidad = 0, digito;

do {
printf("Ingrese un entero positivo: ");
scanf("%d", &n);
} while (n < 1);

while (n > 0) {
digito = n % 10;     
suma = suma + digito;
cantidad++;           
n = n / 10;           
}

printf("Suma: %d\n", suma);
printf("Cantidad de digitos: %d\n", cantidad);

return 0;
}