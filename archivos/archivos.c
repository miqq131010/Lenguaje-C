#include <stdio.h>
int main(int argc, char** argv){
    FILE *datos = fopen("datos.data", "r");
    if (!datos){
        printf("Archivo no existe\n");
        return 1;
    }
    fclose(datos);
}