#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Proyecto{
//ID_de_Proyecto,Nombre_del_Proyecto,Fecha_de_Inicio,Fecha_de_Finalización,Estado_del_Proyecto
	int id_proy;
	string nombre, fechaini, fechafin, estado;
	vector<int> ids;
public:
	Proyecto();
	~Proyecto();
	Proyecto(int,string,string,string,string);
	vector<int> getDevs();
};

