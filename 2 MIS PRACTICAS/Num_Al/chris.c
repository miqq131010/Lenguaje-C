#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char dia[3];
    printf("Ingrese las dos primeras letras del día de la semana: ");
    scanf("%2s", dia);

    for (int i = 0; dia[i] != '\0'; i++) {
        dia[i] = toupper(dia[i]);
    }
    // Usamos un switch basado en el primer carácter
    switch (dia[0]) {
        case 'L':
            if (strcmp(dia, "LU") == 0) {
                printf("El día es Lunes.\n");
            } else {
                printf("Entrada inválida.\n");
            }
            break;
        case 'M':
            if (strcmp(dia, "MA") == 0) {
                printf("El día es Martes.\n");
            } else if (strcmp(dia, "MI") == 0) {
                printf("El día es Miércoles.\n");
            } else {
                printf("Entrada inválida.\n");
            }
            break;
        case 'J':
            if (strcmp(dia, "JU") == 0) {
                printf("El día es Jueves.\n");
            } else {
                printf("Entrada inválida.\n");
            }
            break;
        case 'V':
            if (strcmp(dia, "VI") == 0) {
                printf("El día es Viernes.\n");
            } else {
                printf("Entrada inválida.\n");
            }
            break;
        case 'S':
            if (strcmp(dia, "SA") == 0) {
                printf("El día es Sábado.\n");
            } else {
                printf("Entrada inválida.\n");
            }
            break;
        case 'D':
            if (strcmp(dia, "DO") == 0) {
                printf("El día es Domingo.\n");
            } else {
                printf("Entrada inválida.\n");
            }
            break;
        default:
            printf("Entrada inválida.\n");
            break;
    }

    return 0;
}