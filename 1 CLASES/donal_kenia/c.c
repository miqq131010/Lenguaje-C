#include <stdio.h>
#include <stdlib.h>
void limpiar_pantalla(){
    system ("cls");
}
int main() {
    int opcion_pri;
    do {
        limpiar_pantalla();
        printf("\tBienvenido, selecciona una opcion\n1) Mostrar informacion\n2) Salir\n> ");
        scanf("%d", &opcion_pri);
        switch (opcion_pri) {
            case 1: {
                int opcion_sec;
                do {
                    printf("\tSelecciona un area\n1. Ciencias Economicas\n2. Ciencias Sociales\n3. Regresar al menu principal\n> ");
                    scanf("%d", &opcion_sec);
                    switch (opcion_sec) {
                        case 1: {
                            int opcion_ter;
                            do {
                                printf("\tSelecciona una carrera de la lista\n1) Contabilidad Publica y Auditoria\n2) Administracion de Empresas\n3) Regresar al menu anterior\n> ");
                                scanf("%d", &opcion_ter);
                                switch (opcion_ter) {
                                    case 1: {
                                        int opcion_cua;
                                        do {
                                            printf("\tSelecciona una opcion para Contabilidad\n1. Mostrar Informacion de la carrera\n2. Mostrar asignaturas\n3. Mostrar horario\n4. Regresar al menu anterior\n> ");
                                            scanf("%d", &opcion_cua);
                                            switch (opcion_cua) {
                                                case 1:
                                                    printf("Toda la informacion de la carrera\n");
                                                    break;
                                                case 2:
                                                    printf("Asignaturas de Contabilidad\n1. Matematicas\n2. Sistemas contables\n");
                                                    break;
                                                case 3:
                                                    printf("Horario de Contabilidad\n");
                                                    break;
                                                case 4:
                                                    printf("Regresando al menu anterior...\n");
                                                    break;
                                                default:
                                                    printf("Opcion invalida\n");
                                                    break;
                                            }
                                        } while (opcion_cua != 4);
                                        break;
                                    }
                                    case 2:
                                        printf("Opcion de Administracion de Empresas no implementada.\n");
                                        break;
                                    case 3:
                                        printf("Regresando al menu anterior...\n");
                                        break;
                                    default:
                                        printf("Opcion invalida\n");
                                        break;
                                }
                            } while (opcion_ter != 3);
                            break;
                        }
                        case 2:
                            printf("Opcion de Ciencias Sociales no implementada.\n");
                            break;
                        case 3:
                            printf("Regresando al menu principal...\n");
                            break;
                        default:
                            printf("Opcion invalida\n");
                            break;
                    }
                } while (opcion_sec != 3);
                break;
            }
            case 2:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion incorrecta\n");
                break;
        }
    } while (opcion_pri != 2);
    return 0;
}