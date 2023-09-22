// Examen2P3_GerardoCano.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sprint.h"
#include "ScrumMaster.h"
#include "Historias_de_Usuario.h"
#include "Tarea.h"
#include "Proyecto.h"
#include "Developer.h"
#include "SeniorDev.h"
#include "JuniorDev.h"
using namespace std;
void menu() {
    int opcion;
    do {
        cout << "----- Menu Principal -----\n1. Leer archivos\n2. Guardar Archivos\n3. Asignaciones\n4. Salir\nSeleccione una opcion:\n";
        cin >> opcion;
        switch (opcion) {
        case 1:
            //
            break;
        case 2:
            break;
        case 3:
            int opcion2;
            cout << "----- Submenu Asignaciones -----\n1. Asignar Proyecto a ScrumMaster\n2. Listar y Asignar Sprint a Proyecto y a Scrum Master\n"<<
                "3.Listar y Asignar Historia a Sprint, Proyecto y Senior Dev\n4.Listar y Asignar Tarea a Historia de Usuario, Sprint y Junior Dev\n"<<
                "5.Regresar a Menu Principal\nSeleccion una opcion:\n";
            cin >> opcion2;
            switch (opcion2) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                cout << "adios";
                break;
            }
            break;
        case 4:
            cout << "saliendo";
            break;
        }
    } while (opcion != 4);
}
int main(){
    menu();
}

