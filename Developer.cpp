#include "Developer.h"
Developer::Developer(){}
Developer::~Developer(){}
Developer::Developer(int id, int exp, string nombre, string puesto) {
	this->id = id;
	this->anisoexp = exp;
	this->nombrecompleto = nombre;
	this->puesto = puesto;
}
void Developer::to_string() {
	cout << nombrecompleto<<" Puesto: "<<puesto;
}