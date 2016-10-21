#pragma once
#include "Noticiero.h"


class Televisa : public Noticiero
{
	Televisa()
	{
		nombreNoticiero = "Televisa";
		personasDeInteres = {"Hillary Clinton", "Enrique Peña Nieto", "Donald Trump"};

	}	
};