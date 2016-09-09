#pragma once 
#include <iostream>
#include <string.h>
#include "Alas.h"
#include "Motor.h"
#include "Piloto.h"
#include "Avion.h"
using namespace std;


class Builder
{
protected:
	Avion* a;

public:

	Builder(){};

	Avion* getAvion()
	{
		return a();
	}


	void createAvion()
	{
		a = new Avion();
		getAlas();
		getMotor();
		getMarca();
		getSerie();

	}

	virtual void buildAlas() = 0;
	virtual void buildMotor() = 0;
	virtual void buildPiloto() = 0;
	virtual void buildSerie() = 0;
	virtual void buildMarca() = 0;
};