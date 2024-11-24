

/*
El cifrado César es uno de los métodos de cifrado más antiguos y simples que se conocen. 
Consiste en desplazar cada letra del texto original un número fijo de posiciones en el alfabeto. 
Por ejemplo, con un desplazamiento de 3, la letra 'A' se convierte en 'D', 'B' en 'E', y así sucesivamente. 
Este tipo de cifrado es un caso particular de la cifra de sustitución, donde cada letra se sustituye por otra letra, 
y su seguridad radica en la dificultad de adivinar el desplazamiento utilizado. Sin embargo, es relativamente fácil de romper 
con técnicas de análisis de frecuencia, dado que la distribución de las letras en el texto cifrado sigue siendo similar a la del texto original.

El cifrado César se puede implementar de manera sencilla en diversos lenguajes de programación, 
y su comprensión es fundamental para entender conceptos más avanzados en criptografía. 
A pesar de su simplicidad, el cifrado César ha tenido un impacto significativo en la historia de la criptografía 
y se utiliza a menudo como un ejemplo educativo para introducir a los estudiantes en los principios básicos del cifrado. 
Aunque hoy en día no se considera seguro para aplicaciones serias, su legado perdura en la cultura popular y en la historia militar.

Este proyecto se presenta como el trabajo final de la asignatura Fundamentos de Programación, 
donde se busca aplicar los conocimientos adquiridos a lo largo del curso para implementar un algoritmo de cifrado César. 
El objetivo es reforzar las habilidades de programación y comprensión de algoritmos, así como fomentar la creatividad en la solución de problemas.
*/

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