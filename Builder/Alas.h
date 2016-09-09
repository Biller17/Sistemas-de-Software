#pragma once 
#include <iostream>
#include <string.h>
using namespace std;


class Alas
{
public:
	string marca;
	int serie;
	Alas(){}

	void setMarca(string marca)
	{
		this marca = marca;
	}

	string getMarca()
	{
		return marca;
	}

};