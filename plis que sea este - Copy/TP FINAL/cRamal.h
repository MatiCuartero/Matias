#pragma once
#include "cSistema_Rutatlantica.h"
#include "cParada.h"
using namespace std;



class cRamal
{
protected: 

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
	cRamal(cParada *parada1, cParada *parada2, cParada *parada3, cParada *parada4, cParada *parada5);
	cParada getLista();
	~cRamal();
};

