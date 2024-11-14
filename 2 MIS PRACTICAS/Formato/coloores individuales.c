#include <stdio.h>

int main() {
    // Cambiar el color del texto a rojo y el fondo a blanco
    printf("\033[31;47mEste texto es rojo sobre fondo blanco.\033[0m\n");
    
    // Cambiar el color del texto a verde y el fondo a negro
    printf("\033[32;40mEste texto es verde sobre fondo negro.\033[0m\n");
    
    // Cambiar el color del texto a azul y el fondo a amarillo
    printf("\033[34;43mEste texto es azul sobre fondo amarillo.\033[0m\n");
    
    // Restablecer colores
    printf("\033[0mEste texto tiene los colores predeterminados.\n\n\n\n\n\n\n");

    printf("\033[1;31;43mTexto en negrita rojo sobre fondo amarillo\033[0m\n");
    return 0;
}