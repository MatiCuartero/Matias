#pragma once
#include "cSistema_Rutatlantica.h"
#include "cParada.h"
using namespace std;


class cRamal
{
protected: 

	cSistema_Rutatlantica *sistema;

public:

	cRamal();
	cRamal(cParada *parada1, cParada *parada2, cParada *parada3, cParada *parada4, cParada *parada5);
	~cRamal();
};

