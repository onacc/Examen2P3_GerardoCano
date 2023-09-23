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
#include <sstream>
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
        getline(archivo, linea);
        //skip cabezados
        int id,anoslol;
        string nombre, puesto;
        while (getline(archivo, linea)) {
            istringstream cad(linea);
            string token;
            getline(cad, token, ',');
            id = stoi(token);
            getline(cad, nombre, ',');
            getline(cad, token, ',');
            anoslol = stoi(token);
            getline(cad, puesto, ',');
            if (puesto == "ScrumMaster") {
                devs.push_back(new ScrumMaster(id, anoslol, nombre, puesto));
            }
            else if (puesto == "JuniorDev") {
                devs.push_back(new JuniorDev(id, anoslol, nombre, puesto));
            }
            else {
                devs.push_back(new SeniorDev(id, anoslol, nombre, puesto));
            }
            //devs.push_back(new Developer(id, anoslol, nombre, puesto));
        }
        archivo.close();
    }
    //aver si sirve
    /*for (Developer* dev : devs) {
        dev->to_string();
        cout << "\n";
    }*/
}
void leertareas() {
    ifstream archivo("tarea.txt");
    if (archivo.is_open()) {
        string linea;
        getline(archivo, linea);
        //skip
        int id;
        string desc, estado;
        while (getline(archivo, linea)) {
            istringstream ss(linea);
            string token;
            getline(ss, token, ',');
            id = stoi(token);
            getline(ss, desc, ',');
            getline(ss, estado, ',');
          
            tareas.push_back(new Tarea(id, desc,estado));
        }
        archivo.close();
    }
    //aver si sirve
    for (Tarea* t : tareas) {
        t->to_string();
        cout << "\n";
    }
}
void Asignar_Proyecto_ScrumMaster() {

}
void Asignar_sprint_pro_y_scrum() {

}
void Asignar_historia_a_sprint_y_senior() {

}
void Asignar_tarea_a_historia_y_junior() {

}
void menu() {
    int opcion;
    do {
        cout << "----- Menu Principal -----\n1. Leer archivos\n2. Guardar Archivos\n3. Asignaciones\n4. Salir\nSeleccione una opcion:\n";
        cin >> opcion;
        switch (opcion) {
        case 1:
            leerdevs();
            leertareas();
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
                Asignar_Proyecto_ScrumMaster();
                break;
            case 2:
                Asignar_sprint_pro_y_scrum();
                break;
            case 3:
                Asignar_historia_a_sprint_y_senior();
                break;
            case 4:
                Asignar_tarea_a_historia_y_junior();
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

