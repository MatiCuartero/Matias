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


public:
	cColectivo_viejo();
	cColectivo_viejo(int _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion);

	void Asignar_Nuevo_Ramal(cRamal * ramal1, cRamal * ramal2, cRamal * ramal3);
	int Bajar_Personas();
	double Cobrar_Boleto();
	void SistemaGPS();
	void Subir_Personas();
	bool Verificar_Capacidad();
	int get_codigo() { return contador_codigo; }
	~cColectivo_viejo();
	///Agrgar al uml///
	void imprimir_info();
	int get_CAPMAX();

};

