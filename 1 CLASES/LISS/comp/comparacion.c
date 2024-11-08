#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero1,numero2,numero3;
	
	
	printf("ingresa el primer numero: ");
	scanf("%d", &numero1);
	printf("ingresa el segundo numero: ");
	scanf("%d", &numero2);
	printf("ingresa el tercer numero: ");
	scanf("%d", &numero3);
	if(numero1>numero2)
		if(numero1>=numero2)
		printf("numero 2 es mayor");
	if(numero2>=numero3)
		printf("numero3 es mayor");
	else
	printf("el numero3 es mayor");
	
		
		
		
	
	return 0;
}