#include "Persona.hpp"

Persona::Persona(int edad)
{
	this->edad = edad;
	this->genero = rand() % 2;
	
	for (int i = 0; i < 8; i++){
		this->dni[i] = '0' + (rand() % 10);
	}
	this->dni[8] = 'A';
	this->dni[9] = '\0'; //Fin de texto
}
int Persona::getEdad(){
	return edad;
}
void Persona::setEdad(int edad){
	this->edad = edad;
}
bool Persona::esMujer(){
	return genero;
}
void Persona::mostrar(){
	std::cout << "DNI: " << dni << ", Genero: " << (genero ? "Mujer" : "Hombre") << ", Edad: " << edad << std::endl;
}
Persona::~Persona()
{
}

