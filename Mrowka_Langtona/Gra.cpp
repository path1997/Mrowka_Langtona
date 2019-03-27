#include "Gra.h"



void Gra::start(int predkosc)
{
	while (1) {
		kroki++;
		this->predkosc = predkosc;
		poruszaj_sie();
		wyswietl();
	}
}

Gra::~Gra()
{
}
