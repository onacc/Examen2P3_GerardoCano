#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Proyecto{
//ID_de_Proyecto,Nombre_del_Proyecto,Fecha_de_Inicio,Fecha_de_Finalizaci�n,Estado_del_Proyecto
	int id_proy;
	string nombre, fechaini, fechafin, estado;
	vector<int> ids;
public:
	Proyecto();
	~Proyecto();
	Proyecto(int,string,string,string,string);
	vector<int> getDevs();
	void to_string();
	int getId_Proy();
	string getNombre();
	string getFechaini();
	string getfechafin();
	string getestado();
};

