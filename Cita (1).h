/*
    Declaración de valores y atributos de la clase Cita.h
    Autor: Sebastien Zagal
    Fecha: 13/06/2024
*/
#ifndef CITA_H
#define CITA_H
#include <string>
using namespace::std;

class Cita 
{
    private:
        string nombrePaciente;
        string fechaCita;
        string estado;

    public:
        Cita(const string &nombrePaciente, const string &fechaCita, const string &estado); // Cita recibe 3 valores, nombrePaciente, fechaCita, estado
        void cancelarCita();
        void reprogramarCita(const string &nuevaFecha);

        // Getters
        string getNombrePaciente() const;
        string getFechaCita() const;
        string getEstado() const;

        // Setters
        void setNombrePaciente(const string &nombrePaciente);
        void setFechaCita(const string &fechaCita);
        void setEstado(const string &estado);
};

#endif
