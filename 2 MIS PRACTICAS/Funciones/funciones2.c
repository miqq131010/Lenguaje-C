#include <stdio.h>

// Declaración de funciones
void sumar();
void restar();
void multiplicar();
void dividir();
void mostrarMenu();
int main() {
    int opcion;

    do {
        mostrarMenu();
        printf("Elige una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                sumar();
                break;
            case 2:
                restar();
                break;
            case 3:
                multiplicar();
                break;
            case 4:
                dividir();
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Intenta de nuevo.\n");
        }
    } while(opcion != 5);

    return 0;
}

void mostrarMenu() {
    printf("\n--- Menú de Operaciones ---\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Salir\n");
}

void sumar() {
    float a, b;
    printf("Ingrese dos números para sumar: ");
    scanf("%f %f", &a, &b);
    printf("Resultado: %.2f\n", a + b);
}

void restar() {
    float a, b;
    printf("Ingrese dos números para restar: ");
    scanf("%f %f", &a, &b);
    printf("Resultado: %.2f\n", a - b);
}

void multiplicar() {
    float a, b;
    printf("Ingrese dos números para multiplicar: ");
    scanf("%f %f", &a, &b);
    printf("Resultado: %.2f\n", a * b);
}

void dividir() {
    float a, b;
    printf("Ingrese dos números para dividir: ");
    scanf("%f %f", &a, &b);
    if (b != 0) {
        printf("Resultado: %.2f\n", a / b);
    } else {
        printf("Error: No se puede dividir entre cero.\n");
    }
}