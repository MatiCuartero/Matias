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

	cColectivo_nuevo*colectivo1;
	cColectivo_nuevo*colectivo2;
	cColectivo_nuevo*colectivo3;
	cColectivo_viejo*colectivo4;
	cColectivo_viejo*colectivo5;
	cColectivo_viejo*colectivo6;
	cColectivo_viejo*colectivo7;
	cAcordeon*colectivo8;
	cAcordeon*colectivo9;
	cAcordeon*colectivo10;



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
	////AGREGAR UML//
	void agregar_colectivos();//llenamos las listas con los colectivos

};

