#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_TRANSACCIONES 100
#define MAX_INTENTOS 3

/* Estructura para almacenar la información de los usuarios */
struct Usuario {
    int numeroCuenta;
    int saldo;
};
/* Estructura para almacenar información de transacciones */
struct Transaccion {
    char tipo[20];
    int cantidad;
};
void limpiarPantalla() {
    // Comando para limpiar la pantalla en Windows
    #ifdef _WIN32
        system("cls");
    #else
        // Comando para limpiar la pantalla en Linux y macOS
        system("clear");
    #endif
}
int iniciarSesion() {
    char usuario[20];
    char Password[20];
    int intentos = 0;
    int i = 0;
    char c;

    printf("\t\t\t\tBIENVENIDO AL CAJERO URACCAN ROSITA\n\n");

    do {
        printf("\nIngrese su Numero de Cuenta: \n");
        scanf("%s", usuario);

        printf("\nIngrese su Password: \n");
        scanf("%s", Password);
        /* Verificar las credenciales */
        if (strcmp(usuario, "0011211970013") == 0 && strcmp(Password, "123") == 0) {
            printf("\nInicio de sesión exitoso.\n");
            return 1;  // Éxito
        } else {
            printf("\nRevise sus Datos y vuelva a intentarlo \n");
            intentos++;
        }

    } while (intentos < MAX_INTENTOS);

    printf("\nDemasiados intentos. El programa se cerrara.\n");
    return 0;  // Fallo
}

/* Funciones para realizar operaciones en el cajero */
void consultarSaldo(struct Usuario *usuario) {
    printf("Su saldo actual es: $%d\n", usuario->saldo);
}

void ingresarSaldo(struct Usuario *usuario, struct Transaccion historial[], int *numTransacciones) {
    int monto;
    printf("Ingrese la cantidad de dinero que desea ingresar: ");
    scanf("%d", &monto);

    if (monto > 0) {
        /* Registrar la transacción en el historial */
        struct Transaccion nuevaTransaccion;
        strcpy(nuevaTransaccion.tipo, "Deposito");
        nuevaTransaccion.cantidad = monto;
        historial[*numTransacciones] = nuevaTransaccion;
        (*numTransacciones)++;
        usuario->saldo += monto;
        printf("Ingreso de saldo exitoso. Saldo actual: $%d\n", usuario->saldo);
    } else {
        printf("Monto ingresado no valido.\n");
    }
}

void retirarEfectivo(struct Usuario *usuario, struct Transaccion historial[], int *numTransacciones) {
    int monto;
    printf("Ingrese la cantidad de dinero que desea retirar: ");
    scanf("%d", &monto);

    if (monto > 0 && monto <= usuario->saldo) {
        struct Transaccion nuevaTransaccion;
        strcpy(nuevaTransaccion.tipo, "Retiro");
        nuevaTransaccion.cantidad = monto;
        historial[*numTransacciones] = nuevaTransaccion;
        (*numTransacciones)++;
        usuario->saldo -= monto;
        printf("Retiro de efectivo exitoso. Saldo actual: $%d\n", usuario->saldo);
    } else {
        printf("Monto no válido o saldo insuficiente.\n");
    }
}

void recargarTelefono(struct Usuario *usuario, struct Transaccion historial[], int *numTransacciones) {
    char compania[20];
    char telefono[20];
    int cantidad;

    printf("Ingrese la compañia telefonica: ");
    scanf("%s", compania);
    printf("Ingrese el número de telefono: ");
    scanf("%s", telefono);
    printf("Ingrese la cantidad de dinero para recargar el telefono: ");
    scanf("%d", &cantidad);

    if (cantidad > 0 && cantidad <= usuario->saldo) {
                /* Registrar la transacción en el historial */
        struct Transaccion nuevaTransaccion;
        strcpy(nuevaTransaccion.tipo, "Recarga Telefonica");
        nuevaTransaccion.cantidad = cantidad;
        historial[*numTransacciones] = nuevaTransaccion;
        (*numTransacciones)++;
        usuario->saldo -= cantidad;
        printf("Recarga telefonica exitosa. Saldo actual: $%d\n", usuario->saldo);
    } else {
        printf("Monto no valido o saldo insuficiente.\n");
    }
}

void mostrarHistorial(struct Transaccion historial[], int numTransacciones) {
    int i;
    printf("\n---- Historial de Transacciones -----\n");
    printf("| Tipo de Transaccion\tCantidad    |\n");
    printf("|                                   |\n");
    for (i = 0; i < numTransacciones; i++) {
        printf("%-22s\t%d\n", historial[i].tipo, historial[i].cantidad);
    }
    printf("-------------------------------------\n");
}

/* Función principal del programa */
int main() {
    /* Historial de transacciones */
    struct Transaccion historial[MAX_TRANSACCIONES];
    int numTransacciones = 0;

    /* Usuario de ejemplo */
    struct Usuario usuario = {123456, 10000};

    /* Número de cuenta y saldo inicial */
    int opcion;
    char realizarOtraAccion;

    if (!iniciarSesion()) {
        return 1;  /* Cierre del programa debido a falla en inicio de sesión */
    }

    do {
        /* Limpiar la pantalla */
        limpiarPantalla();

        /* Menú de operaciones */
        printf("\n----------- Cajero Automatico -----------\n");
        printf("| 1. Consultar Saldo                     |\n");
        printf("| 2. Ingresar Saldo                      |\n");
        printf("| 3. Retirar Efectivo                    |\n");
        printf("| 4. Recargar Telefono                   |\n");
        printf("| 5. Mostrar Historial de Transacciones   |\n");
        printf("| 6. Salir                               |\n");
        printf("|-----------------------------------------|\n");
        printf("Ingrese la opcion deseada: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                consultarSaldo(&usuario);
                break;
            case 2:
                ingresarSaldo(&usuario, historial, &numTransacciones);
                break;
            case 3:
                retirarEfectivo(&usuario, historial, &numTransacciones);
                break;
            case 4:
                recargarTelefono(&usuario, historial, &numTransacciones);
                break;
            case 5:
                mostrarHistorial(historial, numTransacciones);
                break;
            case 6:
                printf("Gracias por utilizar el cajero automático.\n");
                return 0;
            default:
                printf("Opcian no valida. Por favor, elija una opción valida.\n");
        }

        /* Preguntar al usuario si quiere realizar otra acción */
        printf("\nQuiere realizar otra accian (S/N): ");
        scanf(" %c", &realizarOtraAccion);
    } while (realizarOtraAccion == 'S' || realizarOtraAccion == 's');

    printf("Gracias por utilizar el cajero automatico.\n");
    return 0;
}