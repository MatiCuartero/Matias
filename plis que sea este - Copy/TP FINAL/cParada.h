#pragma once
#include <iostream>
#include <string>
#include "cSistema_Rutatlantica.h"
using namespace std;
#define N 15
#define M 20


class cParada

{
protected:

	int codigo_identificativo;
	const string nombre;
	string direccion;

	 
public:

	cParada();
	cParada(int _cod, string _dir, string _nom);
	int getCodigo() { return codigo_identificativo; }
	string getNombre() { return nombre; }
	//15 de 15 paradas.
	//void Llenar_Listas(cParada *parada);
	//friend cParada getListaParadas();
	~cParada();
};

