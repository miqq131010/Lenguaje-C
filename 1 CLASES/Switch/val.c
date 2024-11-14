#include <stdio.h> // Libreria estandar de comunicacion con los perifericos
#include <ctype.h> // Libreria de funciones para el manejo de caracteres
#include <stdlib.h>
#include <string.h> // Libreria para el manejo de cadenas

int main() {
    char dia[3]; // Defino una variable de tipo char con un tamaño de 3
    system("color 0a"); // Asigno color diferente a la consola
    printf("_____________________________________\n\n"); // Imprimo un separador
    printf("     ..:: TAREA MIGUEL DIAZ ::..\n\n"); // Imprimo un mensaje personalizado de autor del proyecto

    while (1) { // Bucle infinito para solicitar la entrada hasta que sea válida
        printf("Ingrese el dia: \n\nLU\t\tMA\t\tMI\nJU\t\tVI\t\tSA\nDO\n"); // Imprimo un menu de opciones
        printf("_____________________________________\n\n>"); // Imprimo un separador
        scanf("%2s", dia); // Lee la entrada de texto del usuario y la almacena en la variable dia

        // Verificar si la longitud de la entrada es 2
        if (strlen(dia) != 2) {
            system("cls"); // Limpia la consola
            system("color 04"); // Cambia el color de la consola a rojo
            printf("\n\n\n\t ! *********     Dia no valido. Debe ingresar exactamente 2 caracteres.  *********     !\n\n\n\n"); // Mensaje de error
            continue; // Vuelve a solicitar la entrada
        }

        dia[0] = toupper(dia[0]); // Convierte la primera letra a mayúscula
        dia[1] = toupper(dia[1]); // Convierte la segunda letra a mayúscula

        switch (dia[0]) { // Inicia un switch que evalúa la primera letra del día ingresado
            case 'L': // Si la primera letra es L
                if (dia[1] == 'U') { // Si la segunda letra es U
                    printf("Es Lunes.\n"); // Imprime un mensaje indicando el día
                } else { // Si la segunda letra no es U
                    system("color 0e");
                    printf("Día no reconocido.\n"); // Imprime un mensaje indicando que el día no fue reconocido
                }
                break; // Sale del switch
            case 'M': // Si la primera letra es M
                if (dia[1] == 'A') { // Si la segunda letra es A
                    printf("Es Martes.\n"); // Imprime un mensaje indicando el día
                    system("color 0e");
                } else if (dia[1] == 'I') { // Si la segunda letra es I
                    printf("Es Miércoles.\n"); // Imprime un mensaje indicando el día
                } else { // Si la segunda letra no es A o I
                    system("color 0e");
                    printf("Día no reconocido.\n"); // Imprime un mensaje indicando que el día no fue reconocido
                }
                break; // Sale del switch
            case 'J': // Si la primera letra es J
                if (dia[1] == 'U') { // Si la segunda letra es U
                    printf("Es Jueves.\n"); // Imprime un mensaje indicando el día
                } else { // Si la segunda letra no es U
                    system("color 0e");
                    printf("Día no reconocido.\n"); // Imprime un mensaje indicando que el día no fue reconocido
                }
                break; // Sale del switch
            case 'V': // Si la primera letra es V
                if (dia[1] == 'I') { // Si la segunda letra es I
                    printf("Es Viernes.\n"); // Imprime un mensaje indicando el día
                } else { // Si la segunda letra no es I
                    system("color 0e");
                    printf("Día no reconocido.\n"); // Imprime un mensaje indicando que el día no fue reconocido
                }
                break; // Sale del switch
            case 'S': // Si la primera letra es S
                if (dia[1] == 'A') { // Si la segunda letra es A
                    printf("Es Sábado.\n"); // Imprime un mensaje indicando el día
                                } else { // Si la segunda letra no es A
                    system("color 0e");
                    printf("Día no reconocido.\n"); // Imprime un mensaje indicando que el día no fue reconocido
                }
                break; // Sale del switch
            case 'D': // Si la primera letra es D
                if (dia[1] == 'O') { // Si la segunda letra es O
                    printf("Es Domingo.\n"); // Imprime un mensaje indicando el día
                } else { // Si la segunda letra no es O
                    system("color 0e");
                    printf("Día no reconocido.\n"); // Imprime un mensaje indicando que el día no fue reconocido
                }
                break; // Sale del switch
            default: // Si la primera letra no es ninguna de las anteriores
                system("cls");
                system("color 04"); // Cambia el color de la consola a rojo
                printf("\n\n\n\t ! *********     Día no válido.  *********     !\n\n\n\n"); // Imprime un mensaje indicando que el día no fue reconocido
                break; // Sale del switch
        }
        
        // Si se ha reconocido un día válido, salimos del bucle
        if (dia[0] == 'L' && dia[1] == 'U' ||
            dia[0] == 'M' && (dia[1] == 'A' || dia[1] == 'I') ||
            dia[0] == 'J' && dia[1] == 'U' ||
            dia[0] == 'V' && dia[1] == 'I' ||
            dia[0] == 'S' && dia[1] == 'A' ||
            dia[0] == 'D' && dia[1] == 'O') {
            break; // Salimos del bucle si se ha reconocido un día válido
        }
    }

    system("pause"); // Pausa la ejecución del programa
    return 0; // Regresa 0 indicando que el programa se ejecutó correctamente
}