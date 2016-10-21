#pragma once
#include <iostream>
#include <string>
#include "Proxy.h"
using namespace std;


class Politico
{
public: 
	string ultimaPublicacion;
	string nombre;
	bool publicacionNueva;
	Proxy manager;


	Politico(){}

	void publicar(string publicacion)
	{
		ultimaPublicacion = publicacion;
	}

	string getPublicacion()
	{
		return ultimaPublicacion;
	}

	void notificarNoticieros()
	{
		manager.notificar(this);
	}
};

