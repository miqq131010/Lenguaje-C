#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef enum { LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO, INVALIDO } Dia;

Dia obtenerDia(char *dia) {
    if (strcmp(dia, "LU") == 0) return LUNES;
    if (strcmp(dia, "MA") == 0) return MARTES;
    if (strcmp(dia, "MI") == 0) return MIERCOLES;
    if (strcmp(dia, "JU") == 0) return JUEVES;
    if (strcmp(dia, "VI") == 0) return VIERNES;
    if (strcmp(dia, "SA") == 0) return SABADO;
    if (strcmp(dia, "DO") == 0) return DOMINGO;
    return INVALIDO;
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

    Dia resultado = obtenerDia(dia);
    switch (resultado) {
        case LUNES: printf("Es Lunes.\n"); break;
        case MARTES: printf("Es Martes.\n"); break;
        case MIERCOLES: printf("Es Miércoles.\n"); break;
        case JUEVES: printf("Es Jueves.\n"); break;
        case VIERNES: printf("Es Viernes.\n"); break;
        case SABADO: printf("Es Sábado.\n"); break;
        case DOMINGO: printf("Es Domingo.\n"); break;
        default: 
            system("color 0e");
            printf("Dia no reconocido.\n");
            break;
    }

    system("pause");
    return 0;
}