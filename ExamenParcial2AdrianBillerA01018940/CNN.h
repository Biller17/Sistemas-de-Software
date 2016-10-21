#pragma once
#include "Noticiero.h"


class CNN : public Noticiero
{
	CNN()
	{
		nombreNoticiero = "CNN Noticias";
		personasDeInteres = {"Hillary Clinton", "Donald Trump"};
	}
	
};