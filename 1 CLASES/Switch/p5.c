#include <stdio.h>
#include <ctype.h>

void imprimirDia(char dia) {
    switch (dia) {
        case 'L':
            printf("Es Lunes.\n");
            break;
        case 'M':
            printf("Es Martes.\n");
            break;
        case 'X':
            printf("Es Miércoles.\n");
            break;
        case 'J':
            printf("Es Jueves.\n");
            break;
        case 'V':
            printf("Es Viernes.\n");
            break;
        case 'S':
            printf("Es Sábado.\n");
            break;
        case 'D':
            printf("Es Domingo.\n");
            break;
        default:
            system("color 0e");
            printf("Día no reconocido.\n");
            break;
    }
}

int main() {
    char dia[3];
    system("color 0a");
    printf("_____________________________________\n\n");
    printf("     ..:: TAREA MIGUEL DIAZ ::..\n\n");
    printf("Ingrese el dia (LU, MA, MI, JU, VI, SA, DO): \n");
    printf("_____________________________________\n\n>");
    
    scanf("%2s", dia);
    dia[0] = toupper(dia[0]);
    dia[1] = toupper(dia[1]);
    dia[2] = '\0'; // Aseguramos que la cadena esté terminada en nulo

    // Llamamos a la función para imprimir el día correspondiente
    if (dia[1] == 'U') {
        imprimirDia(dia[0]); // Lunes
    } else if (dia[1] == 'A') {
        imprimirDia(dia[0]); // Martes
    } else if (dia[1] == 'I') {
        if (dia[0] == 'M') {
            imprimirDia('X'); // Miércoles
        } else {
            system("color 0e");
            printf("Día no reconocido.\n");
        }
    } else if (dia[1] == 'O') {
        imprimirDia(dia[0]); // Domingo
    } else {
        switch (dia[0]) {
            case 'J':
                imprimirDia('J'); // Jueves
                break;
            case 'V':
                imprimirDia('V'); // Viernes
                break;
            case 'S':
                imprimirDia('S'); // Sábado
                break;
            default:
                system("color 0e");
                printf("Día no reconocido.\n");
                break;
        }
    }

    system("pause");
    return 0;
}