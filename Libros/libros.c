#include <stdio.h>
int main() {
    int c_paginas, a_publicacion, e_nacional;
    float subtotal, precio;
    const float v_pagina = 100.0;
    printf("Cantidad de páginas que tiene el libro: ");
    scanf("%d", &c_paginas);
    printf("Es nacional?\n");
    printf("1): Si\n");
    printf("2): No\n");
    scanf("%d", &e_nacional);
    printf("Ingresa el año de publicación: ");
    scanf("%d", &a_publicacion);
    if (e_nacional == 1 || a_publicacion == 2005) {
        subtotal = (c_paginas * v_pagina) * 1.10;
    } else {
        subtotal = c_paginas * v_pagina;
    }
    precio = subtotal;
    printf("Valor a pagar: %.2f\n", precio);
    return 0;
}//Problema Libros_Crhistopher