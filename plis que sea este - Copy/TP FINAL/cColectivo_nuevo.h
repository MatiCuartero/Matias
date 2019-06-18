#pragma once
#include <iostream>
#include <string>
#include "cColectivo.h"
#include "cRamal.h"
using namespace std;

class cColectivo_nuevo : public cColectivo
{

protected:
	bool aire;
	bool direccion_electrica;
	cRamal *ramal;

public:
	cColectivo_nuevo();
	void Abrir_Puerta();
	void Asignar_Nuevo_Ramal();
	int Bajar_Personas();
	double Cobrar_Boleto(string l);
	void SistemaGPS();
	int Subir_Personas();
	bool Verificar_Capacidad();
	~cColectivo_nuevo();


};
