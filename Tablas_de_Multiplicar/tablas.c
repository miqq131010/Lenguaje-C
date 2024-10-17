#include <stdio.h>
int main (){
    int tabla;
    printf("Que tabla deseas generar: ");
    scanf("%i", &tabla);
    for (size_t i = 1; i <= 10; i++)
    {
        printf("%i x %i = %i \n", tabla, i, tabla*i);
    }
}