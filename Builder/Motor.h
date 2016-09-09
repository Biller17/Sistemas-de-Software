#pragma once 
#include <iostream>
#include <string.h>
using namespace std;


class Motor
{
public:
	int potencia;
	string marca;
	int serie;
	Motor(){}

	void setMarca(string marca)
	{
		this marca = marca;
	}

	string getMarca()
	{
		return marca;
	}

};