#include <stdio.h>
int main (){
    int tabla;
    int i;
    printf("Ingresa la tabla a mostrar: ");
    scanf("%i", &tabla);
    for (i = 1; i <= 10; i++)
    {
        printf("%i x %i = %i \n", tabla, i, tabla*i);
    }
}