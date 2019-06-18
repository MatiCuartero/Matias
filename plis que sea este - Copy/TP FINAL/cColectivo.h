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
	cListaT <class cParadas> *parada;
	cListaT <class cPersonas> *personas;
	cListaT <class cColectivo> *colectivo;

public:
	cColectivo();
	cColectivo(int _canmax, string _cod, bool _est, Recorrido _recorrido);
	cPersona *persona;
	cParadas *paradas;

	void Abrir_Puerta();
	void Asignar_Nuevo_Ramal();
	int Bajar_Personas();
	double Cobrar_Boleto(string l);
	void SistemaGPS();
	int Subir_Personas();
	bool Verificar_Capacidad();
	~cColectivo();

};
