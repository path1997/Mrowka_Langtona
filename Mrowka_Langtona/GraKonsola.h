#ifndef GraKonsola_h
#define GraKonsola_h

#include"Gra.h"
#include"Komorka.h"

class GraKonsola: public Gra
{
public:
	GraKonsola(int wysokosc, int szerokosc,int kat) :Gra(wysokosc,szerokosc,kat) {}
	virtual void wyswietl();
	virtual~GraKonsola();
};

#endif
