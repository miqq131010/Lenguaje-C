#include <stdio.h>
int main(){
    int g_celcius=0;
    float temperatura;
    printf("Ingresa la temperatura en C: ");
    scanf("%i", &g_celcius);
    temperatura=(g_celcius * 9/5)+32;
    printf("La temperatura es: %.1f `F", temperatura);
    return 0;
}