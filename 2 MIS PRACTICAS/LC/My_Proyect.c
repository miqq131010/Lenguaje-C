#include <stdio.h>
#include <stdlib.h>
void calculadora() {
    system("cls");
    double num1, num2, resultado;
    int opcion;
    printf("Selecciona la opcion a realizar\n");
    printf("1) Suma \n2) Resta\n3) Multiplicacion\n4) Division\n");
    scanf("%i", &opcion);
    printf("Ingrese el primer numero: ");
    scanf("%lf", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%lf", &num2);
    switch (opcion) {
        case 1:
            resultado = num1 + num2;
            break;
        case 2:
            resultado = num1 - num2;
            break;
        case 3:
            resultado = num1 * num2;
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Error: Division por cero\n");
                return;
            }
            break;
        default:
            printf("Opcion invalida\n");
            return;
    }
    printf("El resultado es: %.2f\n", resultado);

}
void edad() {
    int edad;
    printf("Ingrese su edad: ");
    scanf("%i", &edad);
    if (edad >= 18) {
        printf("Eres mayor de edad\n");
    } else {
        printf("Eres menor de edad\n");
    }
}
int main() {
    int menu;
    printf("Bienvenido mi programa\n");
    printf("Selecciona una aplicacion \n 1) Calculadora simple \n 2) Edad\n");
    while (1) {
        scanf("%i", &menu);
        switch (menu) {
            case 1:
                calculadora();
                break;
            case 2:
                edad();
                break;
            default:
                printf("Opcion invalida. Intente nuevamente.\n");
                break;
                
        }
    }

    return 0;
}