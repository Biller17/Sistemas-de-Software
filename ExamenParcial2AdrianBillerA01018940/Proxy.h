#pragma once
#include <iostream>
#include "Noticiero"
using namespace std;


class Proxy
{
	Noticiero n;
	void notificar(Politico p)
	{
		n.actualizarNoticias(p);
	}

};

