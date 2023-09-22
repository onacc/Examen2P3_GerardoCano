#include "JuniorDev.h"
JuniorDev::JuniorDev() {}
JuniorDev::~JuniorDev() {}
JuniorDev::JuniorDev(int id, int exp, string nombre,string puesto):Developer(id,exp,nombre,puesto) {}
vector<Tarea*>JuniorDev::getTareas() {
	return tareasasignadas;
}
