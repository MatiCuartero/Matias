#pragma once
#include <iostream>
#include <string>
#include "cColectivo_nuevo.h"
using namespace std;


class cAcordeon : public cColectivo_nuevo
{

public:
	cAcordeon();
	void Abrir_Puerta();
	void Asignar_Nuevo_Ramal();
	int Bajar_Personas();
	double Cobrar_Boleto(string l);
	void SistemaGPS();
	int Subir_Personas();
	bool Verificar_Capacidad();
	~cAcordeon();

};
