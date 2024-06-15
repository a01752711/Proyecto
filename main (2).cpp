/*
    Implemetación de clases y menú para su ejecucción. 
    Autor: Sebastien Zagal
    Fecha: 13/06/2024
*/

#include <iostream>
#include "Sistema.h"
using namespace::std;

void mostrarMenu() 
{
    cout << "\nMenu:\n";
    cout << "1. Agregar Paciente\n";
    cout << "2. Agendar Cita\n";
    cout << "3. Reprogramar Cita\n";
    cout << "4. Agregar Nota al Tratamiento\n";
    cout << "5. Mostrar Citas\n";
    cout << "6. Mostrar Pacientes\n";
    cout << "0. Salir\n";
    cout << "Seleccione una opción: ";
}

int main() 
{
    Sistema sistema;
    int opcion;
    string nombre;
    string tratamiento;
    string fecha;
    string nuevaFecha;
    string nota;

    do 
    {
        mostrarMenu();
        cin >> opcion;
        cin.ignore();

        switch (opcion) 
        {
            case 1:
                cout << "Ingrese el nombre del paciente: ";
                getline(cin, nombre);
                cout << "Ingrese el tratamiento del paciente: ";
                getline(cin, tratamiento);
                sistema.agregarPaciente(nombre, tratamiento);
                break;

            case 2:
                cout << "Ingrese el nombre del paciente para agendar la cita: ";
                getline(cin, nombre);
                cout << "Ingrese la fecha de la cita: ";
                getline(cin, fecha);
                sistema.agendarCita(nombre, fecha);
                break;

            case 3:
                cout << "Ingrese el nombre del paciente para reprogramar la cita: ";
                getline(cin, nombre);
                cout << "Ingrese la nueva fecha de la cita: ";
                getline(cin, nuevaFecha);
                sistema.reprogramarCita(nombre, nuevaFecha);
                break;

            case 4:
                cout << "Ingrese el nombre del paciente para agregar una nota al tratamiento: ";
                getline(cin, nombre);
                cout << "Ingrese la nota: ";
                getline(cin, nota);
                sistema.agregarNotaTratamiento(nombre, nota);
                break;

            case 5:
                sistema.mostrarCitas();
                break;

            case 6:
                sistema.mostrarPacientes();
                break;

            case 0:
                cout << "Saliendo del sistema para seguimiento de citas\n";
                break;

            default:
                cout << "Opción no válida. Intente de nuevo.\n";
                break;
        }
    } while (opcion != 0);

    return 0;
}

