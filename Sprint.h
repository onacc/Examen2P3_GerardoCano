#pragma once
#include <iostream>
using namespace std;
class Sprint{
//ID_de_Sprint,Nombre_del_Sprint,Fecha_de_Inicio,Fecha_de_Finalización,Estado_del_Sprint
	int id_sprint, id_proyecto;
	string nombre_sprint, fecha_inicio, fecha_final, estado;
public:
	Sprint();
	~Sprint();
	Sprint(int, string, string, string, string);
	void setId_Proyecto(int);
	void to_string();
};

