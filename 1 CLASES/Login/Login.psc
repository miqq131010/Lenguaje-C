Algoritmo Login
	//Declarar variables
	Definir usuario, clave Como Cadena
	//Solicitar usuario
	Escribir "Ingresa tu usuario: "
	//Guardar usuario en la variable usuario
	Leer usuario
	//Solicitar clave
	Escribir "Ingresa tu clave: "
	//Guardar clave ingresada en la variable clave
	Leer clave
	// Comprobar si el usuario es igual al usuario definido
	Si usuario = "angel" Entonces
		// Comprobar si la clave ingresada es igual a la definida
		Si clave = "1234" Entonces
			// Si son correctos, mostrar un mensaje de acceso
			Escribir "Acceso garantizado"
		Sino
			// Mostrar si la clave es incorrecta
			Escribir "Clave incorrecta"
		FinSi
	Sino
		// Mostrar si el usuario es incorrecto
		Escribir "Usuario incorrecto"
	FinSi
FinAlgoritmo// Miguel Angel Diaz Garcia
