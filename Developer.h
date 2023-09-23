#pragma once
#include <iostream>
using namespace std;
class Developer{
	int id,anisoexp;
	string nombrecompleto,puesto;
public:
	Developer();
	Developer(int, int, string, string);
	~Developer();
	void to_string();
	int getId();
	int getEXP();
	string getNombre();
	string getPuesto();
};

