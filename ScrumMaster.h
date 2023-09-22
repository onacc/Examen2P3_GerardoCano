#pragma once
#include "Developer.h"
#include "Proyecto.h"
#include "Sprint.h"
#include <vector>
class ScrumMaster:public Developer{
	vector<Proyecto*> proyectos;
	vector<Sprint*> sprints;
public:
	ScrumMaster();
	ScrumMaster(int, int, string,string);
	~ScrumMaster();
	vector<Sprint*> getSprints();
	vector<Proyecto*> getProyectos();
};

