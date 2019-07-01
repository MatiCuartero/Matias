#pragma once
#include <iostream>
#include <string>
#include "cSistema_Rutatlantica.h"
using namespace std;
#define N 9
#define M 20

////////TENEMOS QUE CREAR UNA LISTA DE PERSONAS Y AGREGAR PARADAS 
class cParada

{
protected:

	int codigo_identificativo;
	const string nombre;
	string direccion;
	cListaT<cPersona>*persona;


public:

	cParada();
	cParada(int _cod, string _dir, string _nom);
	int getCodigo() { return codigo_identificativo; }
	string getNombre() { return nombre; }
	void Llenar_Listas(cPersona *persona);
	cPersona getListaPersonas();
	~cParada();
};

