#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// Declarar variables a usar
	int numero
	int pin=123;
	// Mostrar mensaje al usaurio donde se le pide ingresar su pin
	printf("ingrese el pin:");
	// Se lee el pin que ingresa el usuario y se almancena en la variable numero
	scanf("%d", &numero);
	// comprobar si el valor ingresado es igual al valor asignado en la variable pin
	if(numero==pin)
	// como es correcto, mostrar mensaje "Correcto"
	printf("el pin es correcto");
	//Poner en pausa la consola
	getch();
	//Finalizar el programa
	return 0;
}