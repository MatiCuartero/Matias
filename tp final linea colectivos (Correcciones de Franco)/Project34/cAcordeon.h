#pragma once
#include <iostream>
#include <string>
#include "cColectivo_nuevo.h"
using namespace std;
#define D 60 //Cantidad de personas maxima

class cAcordeon : public cColectivo_nuevo
{
private:
	int CA;
	int CAPMAX;
	bool aire;
	bool direccion_electrica;
	cRamal *ramal;

public:

	cAcordeon();
	cAcordeon(int _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion);
	void Asignar_Nuevo_Ramal(cRamal *ramal1, cRamal *ramal2, cRamal *ramal3);
	int Bajar_Personas();
	double Cobrar_Boleto();
	void SistemaGPS();
	void Subir_Personas();
	bool Verificar_Capacidad();
	int get_CAPMAX();
	int get_codigo() { return contador_codigo; }
	~cAcordeon();

};
