#pragma once
#include "Noticiero.h"


class MVS : public Noticiero
{
	MVS()
	{
		nombreNoticiero = "MVS Noticias";
		personasDeInteres = {"Hillary Clinton", "Enrique Peña Nieto", "Donald Trump"};
	}
};