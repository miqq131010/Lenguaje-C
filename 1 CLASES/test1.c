#include <stdio.h>
int main(){
    int edad =0;
    printf("Ingresa tu edad: ");
    scanf("%d", &edad);
    if (edad>17)
    {
        printf("Eres mayor de edad");
    }else {
        printf("Eres menor de edad");
    }
    return 0;
}