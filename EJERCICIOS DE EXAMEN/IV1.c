// Nombre: [Christopher Aslen Moran Bustillo]
// Cuenta: [202400260]

#include <stdio.h>

int main(void) {
int n, i, cantidadProducto;
double precio, subtotal = 0.0, descuento, isv, total;

    // Paso 1: Leer n (1-20)
do {
printf("Ingrese la cantidad de productos (1-20): ");
scanf("%d", &n);
} while (n < 1 || n > 20);

    // Paso 2: Leer precios y cantidades
for (i = 1; i <= n; i++) {
        // Validar precio (> 0)
do {
printf("Producto %d - Precio unitario (>0): ", i);
scanf("%lf", &precio);
} while (precio <= 0);

        // Validar cantidad (> 0)
do {
printf("Producto %d - Cantidad (>0): ", i);
scanf("%d", &cantidadProducto);
} while (cantidadProducto <= 0);

        // Acumular al subtotal
subtotal = subtotal + (precio * cantidadProducto);
}

    // Paso 3: Calcular descuento
if (subtotal >= 1000.0) {
descuento = subtotal * 0.10;
} else {
descuento = 0.0;
}

    // Paso 4: Calcular ISV (15% sobre el subtotal menos descuento)
isv = (subtotal - descuento) * 0.15;

    // Paso 5: Calcular total final
total = subtotal - descuento + isv;

    // Paso 6: Imprimir resultados
printf("\n--- FACTURA ---\n");
printf("Subtotal:   L %.2f\n", subtotal);
printf("Descuento:  L %.2f\n", descuento);
printf("ISV (15%%):  L %.2f\n", isv);
printf("Total:      L %.2f\n", total);

return 0;
}