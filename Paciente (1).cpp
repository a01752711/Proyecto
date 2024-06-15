/*
    Uso de valores y atributos de la clase Paciente.h
    Autor: Sebastien Zagal
    Fecha: 13/06/2024
*/
#include "Paciente.h"
#include <iostream>
using namespace::std;

Paciente::Paciente(const string &nombre, const string &tratamiento) : nombre(nombre), tratamiento(tratamiento) {}

// Función que devuelve el nombre de del paciente
string Paciente::getNombre() const 
{
    return nombre;
}

// Función que devuelve el tratamiento de del paciente
string Paciente::getTratamiento() const 
{
    return tratamiento;
}

// Establece el nombre del paciente
void Paciente::setNombre(const string &nombre) 
{
    this->nombre = nombre; 
}

// Establece el tratamiento del paciente
void Paciente::setTratamiento(const string &tratamiento) 
{
    this->tratamiento = tratamiento;
}

// Agrega una nota al tratamiento del paciente
void Paciente::agregarNota(const string &nota) 
{
    tratamiento += "\nNotas: " + nota;
    
}



