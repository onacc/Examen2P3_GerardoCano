#include "ScrumMaster.h"
ScrumMaster::ScrumMaster(){}
ScrumMaster::~ScrumMaster(){}
ScrumMaster::ScrumMaster(int id, int exp, string nombre,string puesto):Developer(id,exp,nombre,puesto) {}
vector<Sprint*> ScrumMaster:: getSprints() {
	return sprints;
}
vector<Proyecto*> ScrumMaster::getProyectos() {
	return proyectos;
}