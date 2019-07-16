#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include <string>
#define N 9
#define M 20

using namespace std;

class cRamal;
class cColectivo;
class cColectivo_nuevo;
class cColectivo_viejo;
class cParada;
class cPersona;
class cAcordeon;
template<typename cPersona>
class cListaT;
template<typename cParada>
class cListaT;

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




public:

	cSistema_Rutatlantica();
	void cant_Personas();
	void monto_porColectivo();
	void TICK_Estado();
	float total_cant_monto();
	int total_cant_Personas();
	void Listar();
	//string getParada();
	void  subir_pasajeros();
	////AGREGAR UML//
	void agregar_colectivos();//llenamos las listas con los colectivos
	void agregar_paradas();//lenamos las listas con las personas
	~cSistema_Rutatlantica();
};

