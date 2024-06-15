/*
    Declaración de valores y atributos de la clase Paciente.h
    Autor: Sebastien Zagal
    Fecha: 13/06/2024
*/

#ifndef PACIENTE_H
#define PACIENTE_H
#include <string>
using namespace::std;

class Paciente 
{
    private:
        string nombre;
        string tratamiento;


    public:
        Paciente(const string &nombre, const string &tratamiento); //Constructor Paciente, da 2 datos, el nombre y el tratamiento
        void agregarNota(const string &nota); // Declara una función para agregar una nota al tratamiento del paciente

        // Getters
        string getNombre() const; // Devuelve el nombre del paciente, const indica que no modifica 
        string getTratamiento() const; // Devuelve el tratamiento del paciente, const indica que no modifica

        // Setters
        void setNombre(const string &nombre); // Establece el nombre del paciente
        void setTratamiento(const string &tratamiento); // Establece el tratamiento del paciente
        
};

#endif 


