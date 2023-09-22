#include "Historias_de_Usuario.h"
Historias_de_Usuario::Historias_de_Usuario(){}
Historias_de_Usuario::~Historias_de_Usuario(){}
Historias_de_Usuario::Historias_de_Usuario(int id_historia, string prioridad, int tiempo, string nombre) {
	this->id_historia = id_historia;
	this->prioridad = prioridad;
	this->tiempo = tiempo;
	this->titulo = nombre;
}
void Historias_de_Usuario::setId_sprint(int id) {
	this->id_sprint=id;
}