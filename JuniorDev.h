#pragma once
#include "Developer.h"
#include <iostream>
#include "Tarea.h"
#include <vector>
using namespace std;
class JuniorDev:public Developer{
	vector<Tarea*> tareasasignadas;
public:
	JuniorDev();
	JuniorDev(int,int,string,string);
	~JuniorDev();
	vector<Tarea*> getTareas();
};

