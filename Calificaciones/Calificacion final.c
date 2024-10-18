#include <stdio.h>
int main() {
  float parcial1, parcial2, parcial3, examen, trabajo;
  printf("Ingrese la primera calificación parcial: ");
  scanf("%f", &parcial1);
  printf("Ingrese la segunda calificación parcial: ");
  scanf("%f", &parcial2);
  printf("Ingrese la tercera calificación parcial: ");
  scanf("%f", &parcial3);
  printf("Ingrese la calificación del examen final: ");
  scanf("%f", &examen);
  printf("Ingrese la calificación del trabajo final: ");
  scanf("%f", &trabajo);
  float promedio_parciales = (parcial1 + parcial2 + parcial3) / 3;
  float calificacion_final = (0.55 * promedio_parciales) + (0.30 * examen) + (0.15 * trabajo);
  printf("La calificación final es: %.2f\n", calificacion_final);
  return 0;
}