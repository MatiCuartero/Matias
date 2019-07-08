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
#define N 9
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
	cListaT <cParada>*ListaParadas;
	//////////////////
	cListaT <class cPersona> *ListaPersona;
	cPersona*persona;
	///////////////////////////
	cListaT<class cColectivo>*lista_colectivos;
	cColectivo*colectivo;

public:

	cSistema_Rutatlantica();
	int cant_Personas();
	double monto_porColectivo();
	void TICK_Estado();
	double total_cant_monto();
	int total_cant_Personas();
	void setRamales();
	string getParada();
	void  subir_pasajeros();
	~cSistema_Rutatlantica();
	////AGREGAR UML//
	void agregar_colectivos();//llenamos las listas con los colectivos
	void agregar_paradas();//lenamos las listas con las personas
};

