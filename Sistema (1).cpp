/*
    Uso de valores y atributos de la clase Sistema.h
    Autor: Sebastien Zagal
    Fecha: 13/06/2024
*/
#include "Sistema.h"
#include <iostream>
using namespace::std;

void Sistema::agregarPaciente(const string &nombre, const string &tratamiento) 
{
    pacientes.emplace_back(nombre, tratamiento);
}

void Sistema::agendarCita(const string &nombrePaciente, const string &fechaCita) 
{
    citas.emplace_back(nombrePaciente, fechaCita, "Programada");
}

void Sistema::reprogramarCita(const string &nombrePaciente, const string &nuevaFecha) 
{
    for (auto &cita : citas) 
    {
        if (cita.getNombrePaciente() == nombrePaciente && cita.getEstado() != "Cancelada") 
        {
            cita.reprogramarCita(nuevaFecha);
            break;
        }
    }
}

void Sistema::agregarNotaTratamiento(const string &nombrePaciente, const string &nota) 
{
    for (auto &paciente : pacientes) 
    {
        if (paciente.getNombre() == nombrePaciente) 
        {
            paciente.agregarNota(nota);
            break;
        }
    }
}

void Sistema::mostrarCitas() const 
{
    for (const auto &cita : citas) 
    {
        cout << "Paciente: " << cita.getNombrePaciente() << ", Fecha: " << cita.getFechaCita() << ", Estado: " << cita.getEstado() << endl;
    }
}

void Sistema::mostrarPacientes() const 
{
    for (const auto &paciente : pacientes) 
    {
        cout << "Nombre: " << paciente.getNombre() << ", Tratamiento: " << paciente.getTratamiento() <<endl;
    }
}
