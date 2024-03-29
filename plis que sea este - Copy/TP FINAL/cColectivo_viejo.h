#pragma once
#include <iostream>
#include <string>
#include "cColectivo.h"
#include "cRamal.h"
using namespace std;
#define L 35 //Cantidad de personas maxima


class cColectivo_viejo : public cColectivo
{

protected:
	int CA;
	int CAPMAX;
	bool aire;
	bool direccion_hidraulica;
	cRamal *ramal;
	cPersona**Lista_Personas;

public:
	cColectivo_viejo();
	cColectivo_viejo(const string _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion);
	/*void Abrir_Puerta();*/
	void Asignar_Nuevo_Ramal();
	int Bajar_Personas();
	double Cobrar_Boleto(string l);
	void SistemaGPS();
	void Subir_Personas();
	bool Verificar_Capacidad();
	~cColectivo_viejo();
	///Agrgar al uml///
	void imprimir_info();
	int get_CAPMAX();

};

