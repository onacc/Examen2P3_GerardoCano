#pragma once
#include <iostream>
using namespace std;
class Historias_de_Usuario{
	int id_historia,tiempo,id_sprint;
	string titulo,prioridad;
public:
	Historias_de_Usuario();
	Historias_de_Usuario(int, string, int, string);
	~Historias_de_Usuario();
	void setId_sprint(int);
};

