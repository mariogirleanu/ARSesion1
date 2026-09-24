#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <iostream>
#include <cstdlib>
#include <ctime>

class Persona
{
public:
    Persona(int edad);
    int getEdad();
    bool esMujer();
    void setEdad(int edad);
    void mostrar();
    ~Persona();

private:
    bool genero; // T = Mujer y F = Hombre
    int edad;
    char dni[10];
};

#endif // PERSONA_HPP
