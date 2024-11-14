#include <stdio.h>
#include <ctype.h>

void imprimirDia(char primera, char segunda) {
    switch (primera) {
        case 'L':
            if (segunda == 'U') {
                printf("Es Lunes.\n");
            } else {
                system("color 0e");
                printf("Día no reconocido.\n");
            }
            break;
        case 'M':
            if (segunda == 'A') {
                printf("Es Martes.\n");
            } else if (segunda == 'I') {
                printf("Es Miércoles.\n");
            } else {
                system("color 0e");
                printf("Día no reconocido.\n");
            }
            break;
        case 'J':
            if (segunda == 'U') {
                printf("Es Jueves.\n");
            } else {
                system("color 0e");
                printf("Día no reconocido.\n");
            }
            break;
        case 'V':
            if (segunda == 'I') {
                printf("Es Viernes.\n");
            } else {
                system("color 0e");
                printf("Día no reconocido.\n");
            }
            break;
        case 'S':
            if (segunda == 'A') {
                printf("Es Sábado.\n");
            } else {
                system("color 0e");
                printf("Día no reconocido.\n");
            }
            break;
        case 'D':
            if (segunda == 'O') {
                printf("Es Domingo.\n");
            } else {
                system("color 0e");
                printf("Día no reconocido.\n");
            }
            break;
        default:
            system("color 04"); // Cambia el color de la consola a rojo
            printf("\n\n\n\t ! *********     Día no válido.  *********     !\n\n\n\n");
            break;
    }
}
int main() {
    char dia[3];
    system("color 0a");
    printf("_____________________________________\n\n");
    printf("     ..:: TAREA MIGUEL DIAZ ::..\n\n");
    printf("Ingrese el dia: \n\nLU\t\tMA\t\tMI\nJU\t\tVI\t\tSA\nDO\n");
    printf("_____________________________________\n\n>");
    
    scanf("%2s", dia);
    dia[0] = toupper(dia[0]);
    dia[1] = toupper(dia[1]);

    imprimirDia(dia[0], dia[1]);  // Llama a la función para imprimir el día

    system("pause");
    return 0;
}