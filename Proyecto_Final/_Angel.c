#include <stdio.h>
#include <stdlib.h>
void portada(){
    printf("__| |_____________________________________________________________________________________| |__\n");
    printf("__   _____________________________FUNDAMENTOS DE PROGRAMACION_____________________________   __\n");
    printf("  | |                                                                                     | |  \n");
    printf("  | |      ___  ___  ________  ________  ________  ________  ________  ________           | |  \n");
    printf("  | |     |\\  \\|\\  \\|\\   __  \\|\\   __  \\|\\   ____\\|\\   ____\\|\\   __  \\|\\   ___  \\         | |  \n");
    printf("  | |     \\ \\  \\\\\\  \\ \\  \\|\\  \\ \\  \\|\\  \\ \\  \\___|\\ \\  \\___|\\ \\  \\|\\  \\ \\  \\\\ \\  \\        | |  \n");
    printf("  | |      \\ \\  \\\\\\  \\ \\   _  _\\ \\   __  \\ \\  \\    \\ \\  \\    \\ \\   __  \\ \\  \\\\ \\  \\       | |  \n");
    printf("  | |       \\ \\  \\\\\\  \\ \\  \\\\  \\\\ \\  \\ \\  \\ \\  \\____\\ \\  \\____\\ \\  \\ \\  \\ \\  \\\\ \\  \\      | |  \n");
    printf("  | |        \\ \\_______\\ \\__\\\\ _\\\\ \\__\\ \\__\\ \\_______\\ \\_______\\ \\__\\ \\__\\ \\__\\\\ \\__\\     | |  \n");
    printf("  | |         \\|_______|\\|__|\\|__|\\|__|\\|__|\\|_______|\\|_______|\\|__|\\|__|\\|__| \\|__|     | |  \n");
    printf("__| |_____________________________________________________________________________________| |__\n");
    printf("__   _______________Miguel Angel Diaz Garcia - Informatica Administrativa_________________   __\n");
    printf("  | |                                                                                     | |  \n");
}
int main() {
    portada();
    int opcion;
    do {
        printf("\n--- Menú ---\n");
        printf("1. Opción 1\n");
        printf("2. Opción 2\n");
        printf("3. Opción 3\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                printf("Has seleccionado la Opción 1.\n");
                break;
            case 2:
                printf("Has seleccionado la Opción 2.\n");
                break;
            case 3:
                printf("Has seleccionado la Opción 3.\n");
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Por favor, intente de nuevo.\n");
                break;
        }
    } while (opcion != 4);
    getchar();
    return 0;
}

void opcion1(){


}

void opcion2(){

}

void opcion3(){

}

void opcion4(){

}