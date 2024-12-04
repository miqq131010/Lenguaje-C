#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "colores_miguel.h"
void cover() { 
    printf(BLUE "__| |_____________________________________________________________________________________| |__\n" );
    printf(BLUE "__   _____________________________FUNDAMENTOS DE PROGRAMACION_____________________________   __\n" );
    printf(BLUE "  | |                                                                                     | |  \n" );
    printf(BLUE "  | |      ___  ___  ________  ________  ________  ________  ________  ________           | |  \n" );
    printf(YELLOW "  | |     |\\  \\|\\  \\|\\   __  \\|\\   __  \\|\\   ____\\|\\   ____\\|\\   __  \\|\\   ___  \\         | |  \n" );
    printf(YELLOW  "  | |     \\ \\  \\\\\\  \\ \\  \\|\\  \\ \\  \\|\\  \\ \\  \\___|\\ \\  \\___|\\ \\  \\|\\  \\ \\  \\\\ \\  \\        | |  \n");
    printf(YELLOW "  | |      \\ \\  \\\\\\  \\ \\   _  _\\ \\   __  \\ \\  \\    \\ \\  \\    \\ \\   __  \\ \\  \\\\ \\  \\       | |  \n");
    printf(YELLOW "  | |       \\ \\  \\\\\\  \\ \\  \\\\  \\\\ \\  \\ \\  \\ \\  \\____\\ \\  \\____\\ \\  \\ \\  \\ \\  \\\\ \\  \\      | |  \n");
    printf(GREEN "  | |        \\ \\_______\\ \\__\\\\ _\\\\ \\__\\ \\__\\ \\_______\\ \\_______\\ \\__\\ \\__\\ \\__\\\\ \\__\\     | |  \n");
    printf(GREEN "  | |         \\|_______|\\|__|\\|__|\\|__|\\|__|\\|_______|\\|_______|\\|__|\\|__|\\|__| \\|__|     | |  \n");
    printf(GREEN "__| |_____________________________________________________________________________________| |__\n");
    printf(GREEN "__   _______________Miguel Angel Diaz Garcia - Informatica Administrativa_________________   __\n");
    printf(GREEN "  | |                                                                                     | |  \n");
}
void cifrarCesar(char *texto, int desplazamiento) {
    char resultado[100];
    int i;
    for (i = 0; texto[i] != '\0'; i++) {
        char letra = texto[i];
        if (letra >= 'A' && letra <= 'Z') {
            letra = (letra - 'A' + desplazamiento) % 26 + 'A';
        }
        else if (letra >= 'a' && letra <= 'z') {
            letra = (letra - 'a' + desplazamiento) % 26 + 'a';
        }
        resultado[i] = letra;
    }
    resultado[i] = '\0';
    printf("Texto cifrado: %s\n\n", resultado);
}
void decodificarCesar(char *texto, int desplazamiento) {
    char resultado[100];
    int i;
    for (i = 0; texto[i] != '\0'; i++) {
        char letra = texto[i];
        if (letra >= 'A' && letra <= 'Z') {
            letra = (letra - 'A' - desplazamiento + 26) % 26 + 'A';
        }
        else if (letra >= 'a' && letra <= 'z') {
            letra = (letra - 'a' - desplazamiento + 26) % 26 + 'a';
        }
        resultado[i] = letra;
    }
    resultado[i] = '\0';
    printf("Texto decodificado: %s\n\n", resultado);
}
void limpiarPantalla() {
    system("cls");
}
int main() {
    char texto[100];
    int desplazamiento;
    int opcion;
    char continuar;
    do {
        limpiarPantalla();
        system("color 0F");
        printf(" _   _ ____      _    ____ ____    _    _   _ \n");
        printf("| | | |  _ \\    / \\  / ___/ ___|  / \\  | \\ | |\n");
        printf("| | | | |_) |  / _ \\| |  | |     / _ \\ |  \\| |\n");
        printf("| |_| |  _ <  / ___ \\ |__| |___ / ___ \\| |\\  |\n");
        printf(" \\___/|_| \\_\\/_/   \\_\\____\\____/_/   \\_\\_| \\_|\n");
        printf("#####################################################\n");
        printf("#                                                   #\n");
        printf("#   1. Cifrar texto                                 #\n");
        printf("#   2. Decodificar texto                            #\n");
        printf("#   3. Salir                                        #\n");
        printf("#                                                   #\n");
        printf("#####################################################\n");
        printf("\nIngresa tu opcion> ");
        scanf("%d", &opcion);
        getchar();
        switch (opcion) {
            case 1:
                do {
                    limpiarPantalla();
                    printf(RED "   ____ _  __                  _            _        \n");
                    printf(RED "  / ___(_)/ _|_ __ __ _ _ __  | |_ _____  _| |_ ___  \n");
                    printf(RED " | |   | | |_| '__/ _` | '__| | __/ _ \\ \\/ / __/ _ \\ \n");
                    printf(RED " | |___| |  _| | | (_| | |    | ||  __/>  <| || (_) |\n");
                    printf(RED "  \\____|_|_| |_|  \\__,_|_|     \\__\\___/_/\\_\\\\__\\___/ \n");
                    printf(GREEN "\nIngrese el desplazamiento: ");
                    scanf("%d", &desplazamiento);
                    getchar();
                    printf("Ingrese el texto a cifrar: ");
                    fgets(texto, sizeof(texto), stdin);
                    texto[strcspn(texto, "\n")] = 0;
                    cifrarCesar(texto, desplazamiento);
                    printf("%cDesea cifrar otro texto? (S): ",168);
                    continuar = getchar();
                    getchar(); 
                } while (continuar == 'S' || continuar == 's');
                break;
            case 2:
                do {
                    limpiarPantalla();
                    printf(ORANGE "  ____                 _  __                  _            _        \n");
                    printf(ORANGE " |  _ \\  ___  ___  ___(_)/ _|_ __ __ _ _ __  | |_ _____  _| |_ ___  \n");
                    printf(ORANGE " | | | |/ _ \\/ __|/ __| | |_| '__/ _` | '__| | __/ _ \\ \\/ / __/ _ \\ \n");
                    printf(ORANGE " | |_| |  __/\\__ \\ (__| |  _| | | (_| | |    | ||  __/>  <| || (_) |\n");
                    printf(ORANGE " |____/ \\___||___/\\___|_|_| |_|  \\__,_|_|     \\__\\___/_/\\_\\\\__\\___/ \n");
                    printf(GREEN "Ingrese el desplazamiento: ");
                    scanf("%d", &desplazamiento);
                    getchar();
                    printf("Ingrese el texto a decodificar: ");
                    fgets(texto, sizeof(texto), stdin);
                    texto[strcspn(texto, "\n")] = 0;
                    decodificarCesar(texto, desplazamiento);
                    printf("%cDesea decodificar otro texto? (S): ",168);
                    continuar = getchar();
                    getchar();
                } while (continuar == 'S' || continuar == 's');
                break;
            case 3:
                limpiarPantalla();
                cover();
                printf(WHITE "\n\n\n\tSaliendo del programa...\n");
                getchar();
                break;
            default:
                printf(RED "Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 3);
    return 0;
}

// Este es un programa creado como proyecto final de la asignatura Fundamentos de programacion