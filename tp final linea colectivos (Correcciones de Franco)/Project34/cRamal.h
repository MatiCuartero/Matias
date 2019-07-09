#pragma once
#include "cSistema_Rutatlantica.h"
#include "cParada.h"
#include "cListaT.h"
using namespace std;
#define N 9


class cRamal
{
protected: 

	string nombre;
	cListaT<cParada>*ListaParadas;


public:

	cRamal();
	cRamal(string nombre, cParada *parada1, cParada *parada2, cParada *parada3, cParada *parada4, cParada *parada5);
	string getNombre() { return nombre; }
	cListaT<cParada>* getLista() { return ListaParadas; }
	~cRamal();
};

