#include "Sprint.h"
Sprint::Sprint(){}
Sprint::~Sprint(){}
//ID_de_Sprint,Nombre_del_Sprint,Fecha_de_Inicio,Fecha_de_Finalización,Estado_del_Sprint
Sprint::Sprint(int id_sprint, string nombre, string fechaini, string fechafin, string estado) {
	this->id_sprint = id_sprint;
	this->nombre_sprint = nombre;
	this->fecha_inicio = fechaini;
	this->fecha_final = fechafin;
	this->estado = estado;
}
void Sprint::setId_Proyecto(int id) {
	this->id_proyecto = id;
}
void Sprint::to_string() {
	cout << id_sprint << " " << nombre_sprint;
}
int Sprint::getId_sprint() {
	return id_sprint;
}
string Sprint::getNombre() {
	return nombre_sprint;
}
string Sprint::getFechaini() {
	return fecha_inicio;
}
string Sprint::getFechafin() {
	return fecha_final;
}
string Sprint::getEstado() {
	return estado;
}