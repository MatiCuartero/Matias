#pragma once
#include "cSistema_Rutatlantica.h"
#include "cParada.h"
using namespace std;
#define N 9


class cRamal
{
protected: 

	string nombre;
	cParada*parada1;
	cParada*parada2;
	cParada*parada3;
	cParada*parada4;
	cParada*parada5;
	cParada*parada6;
	cParada*parada7;
	cParada*parada8;
	cParada*parada9;

	cParada **ListaParadas;


public:

	cRamal();
	cRamal(string nombre, cParada *parada1, cParada *parada2, cParada *parada3, cParada *parada4, cParada *parada5);
	string getNombre() { return nombre; }
	cParada getLista();
	~cRamal();
};

