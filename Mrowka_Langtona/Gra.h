#ifndef Gra_h
#define Gra_h

#include"Silnik.h"

class Gra:public Silnik
{
public:
	int opoznienie,kroki;
	Gra(int wysokosc, int szerokosc,int kat):Silnik(wysokosc,szerokosc,kat){
		kroki = 0;
		opoznienie = 0;
	}
	void start(int opoznienie);
	virtual void wyswietl()=0;
	virtual ~Gra();
};

#endif