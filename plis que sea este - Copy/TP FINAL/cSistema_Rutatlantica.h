#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include "cColectivo.h"
#include "cColectivo_nuevo.h"
#include "cColectivo_viejo.h"
#include "cAcordeon.h"
#include "cListaT.h"

using namespace std;

class cSistema_Rutatlantica
{

protected:

	cColectivo_nuevo *colectivonuevo;
	cColectivo_viejo *colectivoviejo;
	cAcordeon* acordeon;
	cColectivo *colectivo;
	cParada *parada;
	cPersona *persona;

	cParada *parada1;
	cParada *parada2;
	cParada *parada3;
	cParada *parada4;
	cParada *parada5;
	cParada *parada6;
	cParada *parada7;
	cParada *parada8;
	cParada *parada9;
	cParada *parada10;
	cParada *parada11;
	cParada *parada12;
	cParada *parada13;
	cParada *parada14;
	cParada *parada15;

public:

	cSistema_Rutatlantica();
	int cant_Personas();
	double monto_porColectivo();
	void TICK_Estado();
	void TICK_GPS();
	double total_cant_monto();
	int total_cant_Personas();
	void setRamales();
	string getParada();
	~cSistema_Rutatlantica();

};

