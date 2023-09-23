#include "Historias_de_Usuario.h"
Historias_de_Usuario::Historias_de_Usuario(){}
Historias_de_Usuario::~Historias_de_Usuario(){}
Historias_de_Usuario::Historias_de_Usuario(int id_historia, string prioridad, string tiempo, string nombre) {
	this->id_historia = id_historia;
	this->prioridad = prioridad;
	this->tiempo = tiempo;
	this->titulo = nombre;
}
void Historias_de_Usuario::setId_sprint(int id) {
	this->id_sprint=id;
}
void Historias_de_Usuario::to_string() {
	cout << id_historia << " " << titulo;
}
int Historias_de_Usuario::getIdhist() {
	return id_historia;
}
string Historias_de_Usuario::getTit() {
	//TETA!!!!!
	return titulo;
}
string Historias_de_Usuario::getPrioridad() {
	return prioridad;
}
string Historias_de_Usuario::getTiempo() {
	return tiempo;
}