#include <stdio.h>

int main() {
int i;
float nota;
float suma = 0;
float promedio;

for (i = 1; i <= 5; i++) {
printf("Ingrese la calificacion %d:\n", i);
scanf("%f", &nota);

suma = suma + nota;
}

promedio = suma / 5;

printf("promedio de las 5 notas es: %.2f\n", promedio);

 return 0;
}