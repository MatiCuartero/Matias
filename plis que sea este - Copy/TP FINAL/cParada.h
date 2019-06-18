#pragma once
#include <iostream>
#include <string>
#include "cSistema_Rutatlantica.h"
using namespace std;
#define N 15
#define M 20
class cParada
{
	//agregar al uml
protected:
	string const codigo_identificativo;
	string direccion;
	string const nombre;
	static cParada **ListaParadas;
	//static string ListaPersonas[M];

public:
	cParada();
	cParada(string _cod, string _dir, string _nom);
	//15 de 15 paradas.
	void Llenar_Listas(cParada *parada);
	
	~cParada();
};

