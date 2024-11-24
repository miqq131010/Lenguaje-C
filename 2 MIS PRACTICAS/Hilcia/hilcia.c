#include <stdio.h>
#include <stdlib.h>

void limpiar_pantalla() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void calcular_precio() {
    limpiar_pantalla();
    float presupuesto, costo_material, area;
    
    printf("Ingrese su presupuesto para la construccion: ");
    scanf("%f", &presupuesto);

    printf("Ingrese el costo por metro cuadrado de construccion: ");
    scanf("%f", &costo_material);
    area = presupuesto / costo_material;
    
    printf("Con un presupuesto de %.2f, puedes construir %.2f metros cuadrados.\n", presupuesto, area);
    printf("Presiona cualquier tecla para regresar...");
    getchar();
    getchar();
    limpiar_pantalla();
}

void calcular_materiales() {
    limpiar_pantalla();
    float area, cantidad_materiales;

    printf("Ingrese el area de la casa en metros cuadrados: ");
    scanf("%f", &area);

    cantidad_materiales = area * 100;
    float cemento = area * 50;

    printf("Para construir una casa de %.2f metros cuadrados, necesitas:\n", area);
    printf("- %.2f ladrillos\n", cantidad_materiales);
    printf("- %.2f kg de cemento\n", cemento);
    printf("Presiona cualquier tecla para regresar...");
    getchar();
    getchar();
    limpiar_pantalla();
}

int main() {
    int opcion;
    do {
        limpiar_pantalla();
        printf("\t\tSelecciona una opcion:\n\t1) Calcular precio\n\t2) Calcular materiales\n\t3) Salir\n>");
        
        // Intentar leer un entero
        if (scanf("%d", &opcion) != 1) {
            // Si scanf falla, limpiar el buffer
            printf("Entrada no válida. Por favor, introduce un número.\n");
            while (getchar() != '\n'); // Limpiar el buffer
            opcion = 0; // Asignar un valor que no sea 3 para que el bucle continúe
        } else {
            switch (opcion) {
            case 1:
                calcular_precio();
                break;
            case 2:
                calcular_materiales();
                break;
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("No has seleccionado una opción correcta. Inténtalo de nuevo.\n");
                printf("Presiona cualquier tecla para continuar...");
                getchar(); // Esperar a que el usuario presione una tecla
                getchar(); // Esperar a que el usuario presione otra tecla
                break;
            }
        }
    } while (opcion != 3);

    return 0;
}