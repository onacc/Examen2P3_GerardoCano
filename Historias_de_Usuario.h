#pragma once
#include <iostream>
using namespace std;
class Historias_de_Usuario{
	int id_historia,id_sprint;
	string titulo,prioridad,tiempo;
public:
	Historias_de_Usuario();
	Historias_de_Usuario(int, string, string, string);
	~Historias_de_Usuario();
	void setId_sprint(int);
	void to_string();
	int getIdhist();
	string getTit();//teta
	string getPrioridad();
	string getTiempo();
};

