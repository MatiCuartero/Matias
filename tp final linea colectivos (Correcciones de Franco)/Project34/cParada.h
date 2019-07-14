#pragma once
#include <iostream>
#include <string>
#include "cListaT.h"
//#include "cPersona.h"
//#include "cSistema_Rutatlantica.h"
#define N 9
#define M 20
using namespace std;

class cPersona;
////////TENEMOS QUE CREAR UNA LISTA DE PERSONAS Y AGREGAR PARADAS 
class cParada

{
protected:

	int codigo_identificativo;
	const string nombre;
	string direccion;
	cListaT<class cPersona> *ListaPersonas;


public:

	cParada();
	cParada(int _cod, string _dir, string _nom);
	int getCodigo() { return codigo_identificativo; }
	string getNombre() { return nombre; }
	void Llenar_Listas(cPersona *persona);
	cListaT<class cPersona> *getListaPersonas() { return ListaPersonas; }
	~cParada();
};

