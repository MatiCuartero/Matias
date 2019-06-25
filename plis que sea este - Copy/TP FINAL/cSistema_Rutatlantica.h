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

	
	
	//////RAMALES///////
	cRamal *ramal1;
	cRamal *ramal2;
	cRamal *ramal3;
	//////PARADAS//////
	cParada *parada;

	cParada *parada1;
	cParada *parada2;
	cParada *parada3;
	cParada *parada4;
	cParada *parada5;
	cParada *parada6;
	cParada *parada7;
	cParada *parada8;
	cParada *parada9;

	/////////////////////////////////////////
	cPersona*persona;
	cListaT <class cPersona> *ListaPersona;

	//Fijarse inicializacion, porque lo hago en una funcion, no como dice la teoria
	static cParada **ListaParadas;
	//static int contTICKS;

	//////////////COLECTIVOS/////////
	cListaT<class cColectivo>*lista_colectivos;

	cColectivo*colectivo1;
	cColectivo*colectivo2;
	cColectivo*colectivo3;
	cColectivo*colectivo4;
	cColectivo*colectivo5;
	cColectivo*colectivo6;
	cColectivo*colectivo7;
	cColectivo*colectivo8;
	cColectivo*colectivo9;
	cColectivo*colectivo10;

	cColectivo*colectivo;

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
	////AGREGAR UML//
	void agregar_colectivos();//llenamos las listas con los colectivos
	void agregar_personas();//lenamos las listas con las personas
};

