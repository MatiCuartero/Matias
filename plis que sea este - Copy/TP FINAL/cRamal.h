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
	cParada*parada10;
	cParada*parada11;
	cParada*parada12;
	cParada*parada13;
	cParada*parada14;
	cParada*parada15;



public:

	cRamal();
	cRamal(cParada *parada1, cParada *parada2, cParada *parada3, cParada *parada4, cParada *parada5);
	~cRamal();
};

