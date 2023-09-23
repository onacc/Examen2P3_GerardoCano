#include "Proyecto.h"
//ID_de_Proyecto,Nombre_del_Proyecto,Fecha_de_Inicio,Fecha_de_Finalización,Estado_del_Proyecto
Proyecto::Proyecto(){}
Proyecto::~Proyecto(){}
Proyecto::Proyecto(int id, string nombre, string fechaini,string fechafin,string estado) {
	this->id_proy = id;
	this->nombre = nombre;
	this->fechaini = fechaini;
	this->fechafin = fechafin;
	this->estado = estado;
}
vector<int> Proyecto::getDevs() {
	return ids;
}
void Proyecto::to_string() {
	cout << id_proy << " " << nombre;
}
int Proyecto::getId_Proy() {
	return id_proy;
}
string Proyecto::getNombre() {
	return nombre;
}
string Proyecto::getFechaini() {
	return fechaini;
}
string Proyecto::getfechafin() {
	return fechafin;
}
string Proyecto::getestado() {
	return estado;
}