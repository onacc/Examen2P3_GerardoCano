#include "Tarea.h"
Tarea::Tarea(){}
Tarea::~Tarea(){}
Tarea::Tarea(int id, string descripcion, string estado) {
	this->id_tarea = id;
	this->descripcion = descripcion;
	this->estado = estado;
}
void Tarea::setId_historia(int id) {
	this->id_historia = id;
}