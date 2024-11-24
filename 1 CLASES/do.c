#include <stdio.h>
int main() {
    int opcion;
    double num1, num2, resultado;
    do {
        printf("----- Menu -----\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);
        if (opcion == 5) {
                printf(" ____                                                          ___      \n");
                printf("/\\  _`\\                    /'\\_/`\\  __                        /\\_ \\     \n");
                printf("\\ \\ \\L\\ \\___   _ __       /\\      \\/\\_\\     __   __  __     __\\//\\ \\    \n");
                printf(" \\ \\ ,__/ __`\\/\\`'__\\     \\ \\ \\__\\ \\ \\/\\ \\/'_ `\\/\\ \\/\\ \\/'__`\\\\ \\ \\   \n");
                printf("  \\ \\ \\/\\ \\L\\ \\ \\ \\/       \\ \\ \\_/\\ \\ \\ \\/\\ \\L\\ \\ \\ \\_\\ \\/\\  __/ \\_\\ \\_ \n");
                printf("   \\ \\_\\ \\____/\\ \\_\\        \\ \\_\\\\ \\_\\ \\_\\ \\____ \\ \\____/\\ \\____\\/\\____\\\n");
                printf("    \\/_/\\/___/  \\/_/         \\/_/ \\/_/\\/_/\\/___L\\ \\/___/  \\/____/\\/____/ \n");
                printf("                                            /\\____/                     \n");
                printf("                                            \\_/__/                       \n");
                getchar();
            break;
        }
        printf("Ingrese el primer numero: ");
        scanf("%lf", &num1);
        printf("Ingrese el segundo numero: ");
        scanf("%lf", &num2);
        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado de la suma: %.2lf\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado de la resta: %.2lf\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado de la multiplicacion: %.2lf\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado de la division: %.2lf\n", resultado);
                } else {
                    printf("Error: Division por cero.\n");
                }
                break;
            default:
                printf("Opción no valida. Intente de nuevo.\n");
                break;
        }
        printf("\n");
    } while (1);

    return 0;
}