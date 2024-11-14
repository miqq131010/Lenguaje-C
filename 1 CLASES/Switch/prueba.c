#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // variables
    int opcion;
    char dia[3];

    printf("Ingresa una opcion - LU, MA, MI, JU, VI, SA, DO: ");
    scanf("%s", dia);

    // if para convertir a entero la entrada del usuario
    if(strcmp(dia, "LU")==0)
        opcion = 1;
        else if (strcmp(dia, "MA")==0)
        opcion = 2;
        else if(strcmp(dia, "MI")==0)
        opcion = 3;
        else if (strcmp(dia, "JU")==0)
        opcion = 4;
        else if (strcmp(dia, "VI")==0)
        opcion = 5;
        else if (strcmp(dia, "SA")==0)
        opcion = 6;
        else if (strcmp(dia, "DO")==0)
        opcion = 7;
        else 
        opcion = 8;

        switch(opcion) {
            case 1:
            printf("LUNES");
            break;

            case 2:
            printf("MARTES");
            break;

            case 3: 
            printf("MIERCOLES");
            break;

            case 4:
            printf("JUEVES");
            break;

            case 5:
            printf("VIERNES");
            break;
            
            case 6:
            printf("SABADO");
            break;

            case 7:
            printf("DOMINGO");
            break;

            default:
            printf("OPCION NO VALIDA");
            break;

        }



    return 0;
}