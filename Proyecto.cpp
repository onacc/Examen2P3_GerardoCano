#include "Proyecto.h"
//ID_de_Proyecto,Nombre_del_Proyecto,Fecha_de_Inicio,Fecha_de_Finalizaci�n,Estado_del_Proyecto
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