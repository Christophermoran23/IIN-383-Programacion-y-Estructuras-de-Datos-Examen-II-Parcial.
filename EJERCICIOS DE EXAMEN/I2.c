// Nombre: [Christopher Aslen Moran Bustillo]
// Numero de Cuenta: [202400260]


#include <stdio.h>

int main(void) {
int n, i, suma = 0, opcion;

printf("Ingrese n: ");
scanf("%d", &n);

opcion = 1;

 
while (opcion == 1) {
suma = 0;
        
        
for (i = 1; i <= n; i++) {
            
            
if (i % 2 == 1) { 
suma = suma + i * i;
            }
}
        
opcion = 0; 
}

printf("Suma de cuadrados impares: %d\n", suma);
    return 0;
}