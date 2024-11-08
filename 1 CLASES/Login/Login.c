#include <stdio.h> 
#include <conio.h>
int main(int argc, char *argv[]) {
	//Declarar nuestras variables
	char usuario[10], clave[15];
	//Solicitar Usuario
	printf("Ingresa tu usuario: ");
	//Guardar usuario en la variable usuario 
	scanf("%s", &usuario);
	//Solicitar clave
	printf("Ingresa tu clave: ");
	//Guardar clave ingresada en la variable clave
	scanf("%s", &clave);
	
	//Comprobar si el usuario es igual al usaurio definido
	if(strcmp(usuario, "angel")==0)
		//Comprobar si la clave ingresasa es igual a la definida 
		if(strcmp(clave, "1234")==0)
		//Si  son correctos, mostrar un mensaje de accceso
			printf("Acceso garantizado");
			else
			//Mostrar si la clave es incorrecta
			printf("Clave incorrecta");
		else
		//Mostrar si el usuario es incorrecto
		printf("Usuario incorrecto");
	return 0;
}// Miguel Angel Diaz Garcia