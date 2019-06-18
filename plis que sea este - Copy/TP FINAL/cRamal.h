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
	cRamal(cSistema_Rutatlantica *parada);
	~cRamal();
};

