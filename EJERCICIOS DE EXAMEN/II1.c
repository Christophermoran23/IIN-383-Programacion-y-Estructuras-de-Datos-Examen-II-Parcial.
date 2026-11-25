// Nombre: [christopher Aslen Moran Bustillo]
// Cuenta: [202400260]

#include <stdio.h>

int main(void) {
    double a, b, c;

printf("Ingrese los tres lados del triangulo (separados por espacio): ");
scanf("%lf %lf %lf", &a, &b, &c);

if ((a + b > c) && (a + c > b) && (b + c > a)) {
        
if (a == b && b == c) {
printf("Triangulo equilatero\n");
} 
else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a)) {
printf("Triangulo isosceles\n");
} 
else {
printf("Triangulo escaleno\n");
}
        
} else {
printf("No forman triangulo\n");
}

return 0;
}