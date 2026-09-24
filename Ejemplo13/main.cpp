#include <stdio.h>
#include "Persona.hpp"

int main(int argc, char **argv)
{
	srand(time(NULL));
	
	Persona* grupo[10];
	
	//Crea las personas con el constructor
	for (int i = 0; i < 10; i++){
		int edad = 18 + i;
		grupo[i] = new Persona(edad);
	} 
	//Muestra los datos de las personas
	for (int i = 0; i < 10; i++){
		grupo[i]->mostrar();
	}
	//Elimina a las personas
	for (int i = 0; i < 10; i++){
		delete grupo[i];
	}
	
	return 0;
}
