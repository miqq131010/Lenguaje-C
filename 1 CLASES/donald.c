#include <stdio.h>
#include <stdlib.h>

void mostrarAsignaturas(int carrera) {
    if (carrera == 1) {
        printf("Asignaturas de Ingeniería de Sistemas:\n");
        printf("1. Programación I\n");
        printf("2. Estructuras de Datos\n");
        printf("3. Bases de Datos\n");
    } else if (carrera == 2) {
        printf("Asignaturas de Ingeniería Civil:\n");
        printf("1. Mecánica de Materiales\n");
        printf("2. Estructuras\n");
        printf("3. Geotecnia\n");
    }
}
void mostrarHorario(int carrera) {
    if (carrera == 1) {
        printf("Horario de Ingeniería de Sistemas:\n");
        printf("Lunes: 8:00 - 10:00 Programación I\n");
        printf("Martes: 10:00 - 12:00 Estructuras de Datos\n");
        printf("Miércoles: 8:00 - 10:00 Bases de Datos\n");
    } else if (carrera == 2) {
        printf("Horario de Ingeniería Civil:\n");
        printf("Lunes: 9:00 - 11:00 Mecánica de Materiales\n");
        printf("Martes: 11:00 - 13:00 Estructuras\n");
        printf("Miércoles: 9:00 - 11:00 Geotecnia\n");
    }
}
void mostrarDetalles(int carrera) {
    if (carrera == 1) {
        printf("Detalles de Ingeniería de Sistemas:\n");
        printf("Duración: 5 años\n");
        printf("Título: Ingeniero de Sistemas\n");
    } else if (carrera == 2) {
        printf("Detalles de Ingeniería Civil:\n");
        printf("Duración: 5 años\n");
        printf("Título: Ingeniero Civil\n");
    }
}
int main() {
    int opcion, area, carrera;
    do {
        printf("\nMenu Principal:\n");
        printf("1. Info de Carreras\n");
        printf("2. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                do {
                    printf("\nSeleccionar Área:\n");
                    printf("1. Ingeniería\n");
                    printf("2. Ciencias\n");
                    printf("3. Volver al menú principal\n");
                    printf("Seleccione un área: ");
                    scanf("%d", &area);
                    switch (area) {
                        case 1:
                            do {
                                printf("\nSeleccionar Carrera:\n");
                                printf("1. Ingeniería de Sistemas\n");
                                printf("2. Ingeniería Civil\n");
                                printf("3. Volver al menú de áreas\n");
                                printf("Seleccione una carrera: ");
                                scanf("%d", &carrera);
                                switch (carrera) {
                                    case 1:
                                    case 2:
                                        do {
                                            printf("\nMenu de Carrera:\n");
                                            printf("1. Mostrar Asignaturas\n");
                                            printf("2. Mostrar Horario Actual\n");
                                            printf("3. Mostrar Detalles de Carrera\n");
                                            printf("4. Volver al menú de carreras\n");
                                            printf("Seleccione una opción: ");
                                            int subopcion;
                                            scanf("%d", &subopcion);
                                            switch (subopcion) {
                                                case 1:
                                                    mostrarAsignaturas(carrera);
                                                    break;
                                                case 2:
                                                    mostrarHorario(carrera);
                                                    break;
                                                case 3:
                                                    mostrarDetalles(carrera);
                                                    break;
                                                case 4:
                                                    break;
                                                default:
                                                    printf("Opción no válida.\n");
                                            }
                                        } while (1);
                                    case 3:
                                        break;
                                    default:
                                        printf("Carrera no válida.\n");
                                }
                            } while (carrera != 3);
                            break;
                        case 2:
                            printf("Área no válida.\n");
                            break;
                        case 3:
                            break;
                        default:
                            printf("Opción no válida.\n");
                    }
                } while (area != 3);
                break;
            case 2:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida.\n");
        }
    } while (opcion != 2);

    return 0;
}