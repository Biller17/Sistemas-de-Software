#pragma once 
#include <iostream>
#include <string.h>
using namespace std;


class Piloto
{
public:
	string nombre;
	
	Piloto(){};


	string getNombre()
	{
		return nombre;
	}

	void setNombre(string nom)
	{
		nombre = nom;
	}


};