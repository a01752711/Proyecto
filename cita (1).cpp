/*
    Uso de valores y atributos de la clase Cita.h
    Autor: Sebastien Zagal
    Fecha: 13/06/2024
*/
#include "Cita.h"
using namespace::std;

Cita::Cita(const string &nombrePaciente, const string &fechaCita, const string &estado) : nombrePaciente(nombrePaciente), fechaCita(fechaCita), estado(estado) {}

string Cita::getNombrePaciente() const 
{
    return nombrePaciente;
}

void Cita::setNombrePaciente(const string &nombrePaciente) 
{
    this->nombrePaciente = nombrePaciente;
}

string Cita::getFechaCita() const 
{
    return fechaCita;
}

void Cita::setFechaCita(const string &fechaCita) 
{
    this->fechaCita = fechaCita;
}

string Cita::getEstado() const 
{
    return estado;
}

void Cita::setEstado(const string &estado) 
{
    this->estado = estado;
}

void Cita::cancelarCita() 
{
    estado = "Cancelada"; // Asigna el estado a Cancelado
}

void Cita::reprogramarCita(const string &nuevaFecha) 
{
    fechaCita = nuevaFecha; // Cambia la fecha a la nueva fecha
    estado = "Reprogramada"; // Cambia el estado a Reprogramada
}
