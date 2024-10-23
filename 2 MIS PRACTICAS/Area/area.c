#include <stdio.h>

int main() {
    float area, base, altura;
    printf("Ingrese la base del triangulo: ");
    scanf("%f", &base); // Usar &base
    printf("Ingrese la altura del triangulo: ");
    scanf("%f", &altura); // Usar &altura
    area = (base * altura) / 2;
    printf("El area del triangulo es %.2f\n", area);
    return 0;
}