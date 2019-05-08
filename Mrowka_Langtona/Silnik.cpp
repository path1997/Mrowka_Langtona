#include "Silnik.h"


Silnik::Silnik(int wysokosc,int szerokosc,int kat)
{
	tablica = new Komorka *[wysokosc];
	for (int i = 0; i < wysokosc; i++) {
		tablica[i] = new Komorka[szerokosc];
	}

	this->szerokosc = szerokosc;
	this->wysokosc = wysokosc;
	this->kat = kat;
	wsp_w = wysokosc / 2;
	wsp_s = szerokosc / 2;

}

void Silnik::poruszaj_sie()
{
	bool stan_kom=tablica[wsp_w][wsp_s].stan;
	/*
	kat:
	2 pó³noc
	1 zachód
	0 po³udnie
	3 wschód
	*/

	
	if (tablica[wsp_w][wsp_s].stan == false) {
		tablica[wsp_w][wsp_s].stan = true;
	}
	else {
		tablica[wsp_w][wsp_s].stan = false;
	}

	if (stan_kom == false) {
		if (kat == 2) {
			wsp_s--;
		} else if (kat == 1) {
			wsp_w--;
		} else if (kat == 0) {
			wsp_s++;
		} else if (kat == 3) {
			wsp_w++;
		}
	} else if (stan_kom == true) {
		if (kat == 2) {
			wsp_s++;
		} else if (kat == 1) {
			wsp_w++;
		} else if (kat == 0) {
			wsp_s--;
		} else if (kat == 3) {
			wsp_w--;
		}
	}

	if (stan_kom == false) {
		kat--;
	} else {
		kat++;
	}

	if (kat == -1) {
		kat = 3;
	}
	else if (kat == 4) {
		kat = 0;
	}

	if (wsp_s > szerokosc-1) {
		wsp_s = 0;
	} else if (wsp_s < 0) {
		wsp_s = szerokosc-1;
	}

	if (wsp_w > wysokosc-1) {
		wsp_w = 0;
	}
	else if (wsp_w < 0) {
		wsp_w = wysokosc-1;
	}
}


Silnik::~Silnik()
{
	for (int i = 0; i < wysokosc; i++) {
		delete[] tablica[i];
	}
	delete[] tablica;
}
