#ifndef Silnik_h
#define Silnik_h

#include"Komorka.h"
#include<fstream>
#include<iostream>
#include<Windows.h>

class Silnik
{
protected:
	int kat,wsp_w,wsp_s;
	int wysokosc,szerokosc,**tablica;
	Silnik(int wysokosc,int szerokosc);
	void poruszaj_sie();
	virtual ~Silnik();
};

#endif
