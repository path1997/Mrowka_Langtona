#ifndef Gra_h
#define Gra_h

#include"Silnik.h"

class Gra:public Silnik
{
public:
	int predkosc,kroki;
	Gra(int wysokosc, int szerokosc):Silnik(wysokosc,szerokosc){
		kroki = 0;
		predkosc = 0;
	}
	void start(int predkosc);
	virtual void wyswietl()=0;
	virtual ~Gra();
};

#endif