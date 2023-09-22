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
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;
vector<Proyecto*> proyectos;
vector<Historias_de_Usuario*> historias;
vector<Tarea*> tareas;
vector<Sprint*> sprints;
vector<Developer*> devs;
void leerdevs() {
    ifstream archivo("developers.txt");
    if (archivo.is_open()) {
        string linea;
        //while linea por linea
        int start = 0;
        bool primero=true;
        int fincomma=0;
        int found = linea.find(",");
        while (getline(archivo, linea)) {
            if (found != string::npos||primero) {
                cout << linea << "\n";
                //cout << linea << "\n";
                found = linea.find(",");
                //cout << "found" << found << "\n";
                string nombre = linea.substr(0, found);
                primero = false;
                cout << nombre;
                start = found;
                fincomma++;
                //cout << fincomma;
                if (!primero) {
                    found = linea.find(",");
                    nombre = linea.substr(start, found);
                    cout << nombre;
                    start = found;
                    fincomma++;
                    //cout << fincomma;
                    if (fincomma == 3) {
                        found = linea.find(",");
                        nombre = linea.substr(start, linea.length()-1);
                       // cout << "num" << fincomma << "";
                        cout << nombre;
                        primero = true;
                        fincomma = 0;
                        start = 0;
                        //int found = linea.find(",");
                    }
                }
            }
        }
        archivo.close();
    }
}
void Asignar_Proyecto_ScrumMaster() {

}
void menu() {
    int opcion;
    do {
        cout << "----- Menu Principal -----\n1. Leer archivos\n2. Guardar Archivos\n3. Asignaciones\n4. Salir\nSeleccione una opcion:\n";
        cin >> opcion;
        switch (opcion) {
        case 1:
            leerdevs();
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
                cout << "\nadios\n";
                break;
            }
            break;
        case 4:
            cout << "saliendo";
            for (Proyecto* pro : proyectos) {
                delete pro;
            }
            for (Developer* dev : devs) {
                delete dev;
            }
            for (Historias_de_Usuario* hist : historias) {
                delete hist;
            }
            for (Tarea* t : tareas) {
                delete t;
            }
            for (Sprint* s : sprints) {
                delete s;
            }
            break;
        }
    } while (opcion != 4);
}
int main(){
    menu();
}

