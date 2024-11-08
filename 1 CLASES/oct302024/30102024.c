#include <stdio.h> 
int main(){
    float calificacion;
    printf("Ingrese la calificacion: ");
    scanf("%f", &calificacion);
    if (calificacion<60)
        printf("Reprobado");
        else
        printf("Aprobado");
    return 0;
}