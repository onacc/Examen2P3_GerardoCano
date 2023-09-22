#pragma once
#include <iostream>
using namespace std;
class Tarea{
	int id_tarea,id_historia;
	string descripcion, estado;
public:
	Tarea();
	Tarea(int,  string, string);
	~Tarea();
	void setId_historia(int);
};

