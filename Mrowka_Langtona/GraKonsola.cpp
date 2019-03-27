#include "GraKonsola.h"



void GraKonsola::wyswietl()
{
	system("cls");
	for (int i = 0; i < wysokosc; i++) {
		for (int j = 0; j < szerokosc; j++) {
			if (tablica[i][j].stan == false) {
				std::cout << " ";
			}
			else {
				std::cout << "x";
			}
		}
		std::cout << std::endl;
	}
	std::cout << kroki<<std::endl;
	Sleep(predkosc);
}

GraKonsola::~GraKonsola()
{
}
