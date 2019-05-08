#include "Gra.h"



void Gra::start(int opoznienie)
{
	this->opoznienie = opoznienie;
	while (1) {
		kroki++;
		poruszaj_sie();
		wyswietl();
	}
}

Gra::~Gra()
{
}
