#include "Silnik.h"






Silnik::Silnik(int wysokosc,int szerokosc)
{
	tablica = new int *[wysokosc];
	for (int i = 0; i < wysokosc; i++) {
		tablica[i] = new int[szerokosc];
	}
	this->szerokosc = szerokosc;
	this->wysokosc = wysokosc;
	kat = 2;
	wsp_w = wysokosc / 2;
	wsp_s = szerokosc / 2;
}

void Silnik::poruszaj_sie()
{
	bool stan_kom=tablica[wsp_w][wsp_s];
	/*
	kat:
	2 prosto
	1 lewo
	0 do tylu
	3 w prawo
	*/

	
	if (kat == -1) {
		kat = 3;
	}
	else if (kat == 4) {
		kat = 0;
	}
	tablica[wsp_w][wsp_s] = true;
	if (stan_kom == false) {
		if (kat == 2) {
			wsp_s--;
		}
		else if (kat == 1) {
			wsp_w--;
		}
		else if (kat == 0) {
			wsp_s++;
		} 
		else if
	}
	if (stan_kom == false) {
		kat--;
	}
	else {
		kat++;
	}
}


Silnik::~Silnik()
{
}
