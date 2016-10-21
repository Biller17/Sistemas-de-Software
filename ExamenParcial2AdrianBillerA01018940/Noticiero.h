#pragma once
#include <iostream>
#include "Politico.h"
#include "Hillary.h"
#include "Trump.h"
#include "Pena.h"
using namespace std;


class Noticiero
{
	string nombreNoticiero;
	string personasDeInteres[];
	Noticiero(){}

	void publicarNoticia(Politico persona)
	{
		cout<<nombreNoticiero<<": recientes noticias."<<endl;
		cout<<persona.nombre<<" recientemente publico:"<<endl;
		cout<<persona.ultimaPublicacion<<endl;
	}

	void actualizarNoticias(Politico p)
	{
		int lista = sizeof(personasDeInteres)/sizeof(personasDeInteres[0]);
		for(int i = 0; i < lista; i++)
		{
			if(p.nombre == personasDeInteres[i])
			{
				publicarNoticia(p);
			}
		}
	}

};




