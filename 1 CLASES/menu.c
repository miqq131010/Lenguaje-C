#include <stdio.h>

int main() {
    int choice;

    do {
        // Mostrar el menú principal
        printf("Menu:\n");
        printf("1. Opción 1\n");
        printf("2. Opción 2\n");
        printf("3. Salir\n");

        // Solicitar la elección del usuario
        printf("Por favor, selecciona una opción (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int subChoice;
                printf("Has seleccionado la Opción 1.\n");
                printf("1. Subopción 1.1\n");
                printf("2. Volver al menú principal\n");
                printf("Selecciona una subopción: ");
                scanf("%d", &subChoice);

                switch (subChoice) {
                    case 1:
                        printf("Ejecutando Subopción 1.1...\n");
                        break;
                    case 2:
                        printf("Volviendo al menú principal...\n");
                        break;
                    default:
                        printf("Subopción inválida. Volviendo al menú principal...\n");
                        break;
                }
                break;
            }
            case 2: {
                int subChoice;
                printf("Has seleccionado la Opción 2.\n");
                printf("1. Subopción 2.1\n");
                printf("2. Volver al menú principal\n");
                printf("Selecciona una subopción: ");
                scanf("%d", &subChoice);

                switch (subChoice) {
                    case 1:
                        printf("Ejecutando Subopción 2.1...\n");
                        break;
                    case 2:
                        printf("Volviendo al menú principal...\n");
                        break;
                    default:
                        printf("Subopción inválida. Volviendo al menú principal...\n");
                        break;
                }
                break;
            }
            case 3:
                printf("Saliendo del programa. ¡Adiós!\n");
                break;
            default:
                printf("Elección inválida. Por favor, intenta de nuevo.\n");
                break;
        }
    } while (choice != 3); // Continuar hasta que el usuario seleccione la opción 3

    return 0;
}