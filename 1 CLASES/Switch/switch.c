// Hacer un programa que en base a la letra
//seleccionada muestre el mes (de Enero a Abril)
// E, F, M, A

#include <stdio.h>
#include <stdlib.h>

int main() {
    char mes;
    printf("Ingrese la letra del mes: "); 
    scanf("%c", &mes);
    switch (mes)
    {
    case 'E' :
        printf("El mes es enero");
        break;
    case 'F': 
        printf("El mes es febrero");
        break;
    case 'M': 
        printf("El mes es marzo");
        break;
    case 'A':
        printf("El mes es abril");
        break;
    default: 
        printf("Opcion no valida");
        break;
    }
}