#pragma once 
#include <iostream>
#include <string.h>
using namespace std;

class Avion 
{
private:
	int serie;
	string marca;
	string modelo;
	Motor* motor;
	Alas* alas;
	Piloto* piloto;

public:
	Avion(){}

	string getMarca()
	{
		return marca;
	}

	void setMarca(string marca)
	{
		this marca = marca;
	}

	void setAlas(Alas* ala)
	{
		this alas = ala;
	}

	void setMotor(Motor* mot)
	{
		this motor = mot;	
	}
	void setPiloto(Piloto* pilot)
	{
		this piloto = pilot;
	}

};