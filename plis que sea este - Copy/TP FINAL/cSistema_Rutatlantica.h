#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include "cColectivo.h"
#include "cColectivo_nuevo.h"
#include "cColectivo_viejo.h"
#include "cAcordeon.h"
#include "cListaT.h"
#include "cRamal.h"
#include "cParada.h"
#define N 15
#define M 20

using namespace std;


class cSistema_Rutatlantica
{
	friend class cParada;
protected:

	
	cColectivo_nuevo *colectivonuevo;
	cColectivo_viejo *colectivoviejo;
	cAcordeon* acordeon;
	cColectivo *colectivo;
	cParada *parada;
	cListaT <class cPersona> *ListaPersona;
	cPersona *persona;
	cRamal *ramal1;
	cRamal *ramal2;
	cRamal *ramal3;

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
	static cParada **ListaParadas;
	//static int contTICKS;

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
	void Llenar_Listas();
	~cSistema_Rutatlantica();

};

