#include <stdio.h>
#include <stdlib.h>
int main(){
char mes;
printf("Ingresa una opcion: E,F,M \n");
scanf("%c", &mes);
    switch (mes){
    case 'E' :
        printf("El mes es Enero: ");
        break;
        case 'F' :
        printf("El mes es Febrero: ");
        break;
        case 'M' :
        printf("El mes es Marzo: ");
        break;
    default:
        printf("Opcion No valida");
        break;
    }
    return 0;
}