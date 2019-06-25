#pragma once
#include <iostream>
#include <string>
#include "cColectivo_nuevo.h"
using namespace std;


class cAcordeon : public cColectivo_nuevo
{

public:
	cAcordeon();
	cAcordeon(const string _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion);
	void Abrir_Puerta();
	void Asignar_Nuevo_Ramal();
	int Bajar_Personas();
	double Cobrar_Boleto(string l);
	void SistemaGPS();
	int Subir_Personas();
	bool Verificar_Capacidad();
	void set_CAPMAX(int capacidad);
	int get_CAPMAX();
	~cAcordeon();

};
