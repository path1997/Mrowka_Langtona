#ifndef Gra_h
#define Gra_h

#include"Silnik.h"

class Gra:public Silnik
{
public:
	Gra(int wysokosc, int szerokosc):Silnik(wysokosc,szerokosc){}
	virtual ~Gra();
};

#endif