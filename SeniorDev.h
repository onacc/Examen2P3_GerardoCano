#pragma once
#include "Developer.h"
#include "Historias_de_Usuario.h"
#include <vector>
class SeniorDev:public Developer{
	vector<Historias_de_Usuario*> historias;
public:
	SeniorDev();
	SeniorDev(int,int,string,string);
	~SeniorDev();
	vector<Historias_de_Usuario*> getHistorias();
};

