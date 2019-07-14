#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include "cColectivo.h"
//#include "cColectivo_nuevo.h"
//#include "cColectivo_viejo.h"
//#include "cAcordeon.h"
#include "cListaT.h"
#include "cRamal.h"
#include "cParada.h"
#define N 9
#define M 20

using namespace std;

class cRamal;
//class cColectivo;
class cColectivo_nuevo;
class cColectivo_viejo;
class cAcordeon;
class cParada;
class cPersona;

class cSistema_Rutatlantica
{
	//friend class cParada;
protected:

	
	//////RAMALES///////
	cRamal *ramal1;
	cRamal *ramal2;
	cRamal *ramal3;

	//////PARADAS//////
	cParada *parada;

	/////////////////////////////////////////
	cPersona*persona;
	cListaT <class cPersona> *ListaPersona;
	cListaT <class cParada> *ListaParadas;

	//Fijarse inicializacion, porque lo hago en una funcion, no como dice la teoria
	//static int contTICKS;

	//////////////COLECTIVOS/////////
	cListaT<class cColectivo> *lista_colectivos;

	/*cColectivo*colectivo1;
	cColectivo*colectivo2;
	cColectivo*colectivo3;
	cColectivo*colectivo4;
	cColectivo*colectivo5;
	cColectivo*colectivo6;
	cColectivo*colectivo7;
	cColectivo*colectivo8;
	cColectivo*colectivo9;
	cColectivo*colectivo10;*/


public:

	cSistema_Rutatlantica();
	int cant_Personas();
<<<<<<< HEAD
	void monto_porColectivo();
=======
	//float monto_porColectivo();
>>>>>>> 23b67fe552bdbaea02b22b34bffd0c661c5c88d4
	void TICK_Estado();
	float total_cant_monto();
	int total_cant_Personas();
	//void setRamales();
	//string getParada();
	void  subir_pasajeros();
	~cSistema_Rutatlantica();
	////AGREGAR UML//
	void agregar_colectivos();//llenamos las listas con los colectivos
	void agregar_paradas();//lenamos las listas con las personas
};

