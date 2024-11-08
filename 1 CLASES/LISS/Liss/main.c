#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero;
	int pin=123;
	printf("ingrese el pin:");
	scanf("%d", &numero);
	if(numero==pin)
	printf("el pin es correcto");

	return 0;
}