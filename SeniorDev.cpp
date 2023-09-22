#include "SeniorDev.h"
SeniorDev::SeniorDev() {}
SeniorDev::~SeniorDev(){}
SeniorDev::SeniorDev(int id, int exp,string nombre,string puesto):Developer(id,exp,nombre,puesto) {
}
vector<Historias_de_Usuario*> SeniorDev:: getHistorias() {
	return historias;
}