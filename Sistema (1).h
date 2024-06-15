/*
    Declaración de valores y atributos de la clase Sistema.h
    Autor: Sebastien Zagal
    Fecha: 13/06/2024
*/
#ifndef SISTEMA_H
#define SISTEMA_H
#include <vector>
#include "Paciente.h"
#include "Cita.h"
using namespace::std;

class Sistema 
{
    private:
        vector<Paciente> pacientes;
        vector<Cita> citas;

    public:
        void agregarPaciente(const string &nombre, const string &tratamiento);
        void agendarCita(const string &nombrePaciente, const string &fechaCita);
        void reprogramarCita(const string &nombrePaciente, const string &nuevaFecha);
        void agregarNotaTratamiento(const string &nombrePaciente, const string &nota);
        void mostrarCitas() const;
        void mostrarPacientes() const;
};

#endif
