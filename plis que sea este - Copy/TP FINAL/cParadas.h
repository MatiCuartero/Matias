#pragma once
#include <iostream>
#include <string>
#include "cParada.h"
using namespace std;
#define N 15

class cRamal;

class cParadas
{
	//agregar al uml
protected:

	static string ListaParadas[N];//
	static string ListaRamales[3];//
	cParada*parada;
	

public:
	cParadas();
	void AsignarRamal(string);//
	~cParadas();


};

