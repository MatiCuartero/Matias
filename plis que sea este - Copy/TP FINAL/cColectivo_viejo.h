#pragma once
#include <iostream>
#include <string>
#include "cColectivo.h"
#include "cRamal.h"
using namespace std;


class cColectivo_viejo : public cColectivo
{

protected:

	bool aire;
	bool direccion_hidraulica;
	cRamal *ramal;

public:
	cColectivo_viejo();
	cColectivo_viejo(const string _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion);
	void Abrir_Puerta();
	void Asignar_Nuevo_Ramal();
	int Bajar_Personas();
	double Cobrar_Boleto(string l);
	void SistemaGPS();
	int Subir_Personas();
	bool Verificar_Capacidad();
	~cColectivo_viejo();
	void imprimir_info();



};
