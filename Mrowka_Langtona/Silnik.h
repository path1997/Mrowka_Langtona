#ifndef Silnik_h
#define Silnik_h

#include"Komorka.h"
#include<iostream>
#include<Windows.h>

class Silnik
{
protected:
	int wysokosc,szerokosc, kat, wsp_w, wsp_s;
	Komorka **tablica;
	Silnik(int wysokosc,int szerokosc,int kat);
	void poruszaj_sie();
	virtual ~Silnik();
};

#endif
