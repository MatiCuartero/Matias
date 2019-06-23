#pragma once
#include <iostream>
#include <string>
#include "cPersona.h"
#include "cParadas.h"
#include "cListaT.h"
using namespace std;

enum Recorrido recorrido {};

class cColectivo
{

protected:

	int cant_max;
	string codigo;
	bool Estado;

	cListaT <class cPersonas> *personas;
	cListaT <class cColectivo> *colectivo;

public:
	cColectivo();
	cColectivo(int _cantmax, string _cod, bool _est, Recorrido recorrido, cRamal *ramal);

	cPersona *persona;

	void Abrir_Puerta();
	void Asignar_Nuevo_Ramal();
	int Bajar_Personas();
	double Cobrar_Boleto(string l);
	void SistemaGPS();
	int Subir_Personas();
	bool Verificar_Capacidad();
	~cColectivo();

};
