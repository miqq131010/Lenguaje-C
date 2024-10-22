#include <stdio.h>
#include <time.h>
void mostrarHora() {  // función que muestra la hora actual

    time_t t;
    struct tm *tm_info;
    time(&t);
    tm_info = localtime(&t); 
    printf("Hora actual: %02d:%02d:%02d\n", tm_info->tm_hour, tm_info->tm_min, tm_info->tm_sec);
}
void mostrarFecha() {   // función que muestra la fecha actual

    time_t t;
    struct tm *tm_info;
    time(&t); 
    tm_info = localtime(&t);
    printf("Fecha actual: %02d/%02d/%04d\n", tm_info->tm_mday, tm_info->tm_mon + 1, tm_info->tm_year + 1900);
}
int main() {
    int opcion;
    do {
        printf("Seleccione una opción:\n");
        printf("1. Mostrar hora\n");
        printf("2. Mostrar fecha\n");
        printf("0. Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                mostrarHora();
                break;
            case 2:
                mostrarFecha();
                break;
            case 0:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 0);
    return 0;
}